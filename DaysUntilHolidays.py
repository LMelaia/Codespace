import datetime

def calculate_days_and_weeks(start_date, end_date):
    # Convert the date strings to datetime objects
    start_date = datetime.datetime.strptime(start_date, "%Y-%m-%d")
    end_date = datetime.datetime.strptime(end_date.strftime("%Y-%m-%d"), "%Y-%m-%d")

    # Calculate the difference between the two dates
    delta = end_date - start_date

    # Calculate the number of days and weeks
    days = delta.days
    weeks = days // 7

    return days, weeks

# Example usage
start_date = datetime.datetime.now().strftime("%Y-%m-%d")
end_date = datetime.datetime.strptime('2024-06-14', "%Y-%m-%d")
days, weeks = calculate_days_and_weeks(start_date, end_date)
print(f"Number of days: {days}")
print(f"Number of weeks: {weeks}")
