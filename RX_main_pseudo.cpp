// Define necessary variables and constants
constants:
    speed_of_light

variables:
    phase_difference
    distance
    angle

// Initialize the receiving microcontroller
initialize_microcontroller()

// Set up the antenna array
setup_antenna_array()

// Continuously listen for signals from the beacon
while(true) do:
    received_signal = receive_signal()

    // Measure the phase difference of arrival
    phase_difference = measure_phase_difference(received_signal)

    // Calculate the distance using the phase difference
    distance = calculate_distance(phase_difference)

    // Use the distance to estimate the angle of arrival
    angle = estimate_arrival_angle(distance)

    // Update the position or direction of the beacon object
    update_beacon_position(angle)

    // Perform other necessary operations based on the calculated angle
    perform_operations_based_on_angle(angle)

    // Add appropriate delay or loop timing
    add_delay()

end while
