import numpy as np
import matplotlib.pyplot as plt

# Set up particles
particles = np.random.rand(100, 2) * 50  # 100 particles in corner

velocities = np.random.randn(100, 2) * 0.5  # random small velocities

box_size = 500

entropy_history = []

for t in range(1000):
    # Move particles
    particles += velocities

    # Bounce off walls
    for i in range(2):
        mask_low = particles[:, i] < 0
        mask_high = particles[:, i] > box_size
        velocities[mask_low | mask_high, i] *= -1

    # Calculate entropy
    counts, _, _ = np.histogram2d(particles[:,0], particles[:,1], bins=10, range=[[0,box_size],[0,box_size]])
    probs = counts.flatten() / np.sum(counts)
    probs = probs[probs > 0]
    entropy = -np.sum(probs * np.log(probs))
    entropy_history.append(entropy)

# Plot entropy over time
plt.plot(entropy_history)
plt.xlabel('Time Step')
plt.ylabel('Entropy')
plt.show()
 
