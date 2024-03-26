// Working example! done by chatGPT/Copilot.

const dateOfHolidays = new Date('2024-06-14'); // The date when the holidays start

function calculateDaysBetweenDates(begin, end) {
    const date1 = new Date(begin);
    const date2 = new Date(end);
    const oneDay = 24 * 60 * 60 * 1000;
    const diffDays = Math.round(Math.abs((date2 - date1) / oneDay));
    return diffDays;
}

function calculateDaysUntil(date) {
    return calculateDaysBetweenDates(new Date(), date);
}

const daysUntilHolidays = calculateDaysUntil(dateOfHolidays);
const weeksUntilHolidays = Math.round(daysUntilHolidays / 7);

console.log("The holidays start on", dateOfHolidays.toDateString());
console.log(daysUntilHolidays, "Days,", weeksUntilHolidays, "Weeks until holidays!")
