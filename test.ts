// tests go here; this will not be compiled when this package is used as a library
let result = motor.sum(2, 3)
if (result == 5) {
    basic.showIcon(IconNames.Yes)
} else {
    basic.showIcon(IconNames.No)
}
