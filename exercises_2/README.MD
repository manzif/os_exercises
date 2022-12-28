In this exercise, you’re asked use the circuit described in Section 4.1.2 and to write a program that read the digital input. Your program should work as follows:

    • All LEDs are OFF at the start of the program
    • Once the program begins, LED1 and LED4 blink continuously at 1 Hz
    • While the switch SW1 is pressed, LED2 is turned ON and stays ON until the switch SW1 is released.
    • When SW1 is pressed and then released, turn ON LED3 for one second, and turn it OFF

    To complete this exercise, you should do the following:
    • Sketch a flowchart of the program
    • Write, debug and simulate the program using Proteus VSM
    • Does your program work as intended? If not, describe the problem, if any, and explain why this is the case.

NOTE—At the end of this exercise, you should note that:

    • While the digital input SW1 is pressed, this code blocks the CPU in a tight polling loop.
    This is also known as spinning.
    • Switch pooling is not power or CPU efficient.
    • Once the switch is pressed, the CPU is blocked and cannot do anything else.
    • While it is not always bad practice to monitor micro-controller peripheral hardware this
    way (especially when the polling duration is short), this is highly discouraged is several
    case because the switch presses have an indeterminate time. Thus, spinning becomes
    wasteful of CPU time and most of all, power
