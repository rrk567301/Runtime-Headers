@class ATXHeuristicDevice;

@interface ATXCalendarEventsDataSource : NSObject {
    ATXHeuristicDevice *_device;
}

- (id)initWithDevice:(id)a0;
- (id)sortEkEvents:(id)a0;
- (id)flightEventsFromStartDate:(id)a0 endDate:(id)a1 reason:(id)a2;
- (id)eventsFromStartDate:(id)a0 endDate:(id)a1 category:(id)a2 reason:(id)a3;
- (void).cxx_destruct;
- (id)eventsFromStartDate:(id)a0 endDate:(id)a1 reason:(id)a2;
- (id)hotelEventsFromStartDate:(id)a0 endDate:(id)a1 reason:(id)a2;
- (void)calendarEventsFromStartDate:(id)a0 toEndDate:(id)a1 callback:(id /* block */)a2;
- (void)visibleCalendarsWithCallback:(id /* block */)a0;

@end
