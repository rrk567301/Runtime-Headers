@class NSDateComponents;

@interface CalDAVCalendarQueryTask : CoreDAVPropFindTask

@property (nonatomic) char syncEvents;
@property (nonatomic) char syncTodos;
@property (retain, nonatomic) NSDateComponents *eventFilterStartDate;
@property (retain, nonatomic) NSDateComponents *eventFilterEndDate;

- (id)description;
- (void).cxx_destruct;
- (id)requestBody;
- (id)httpMethod;
- (void)_appendComponentFiltersToXMLData:(id)a0;
- (void)_appendTimeRangeFilterToXMLData:(id)a0 startDate:(id)a1 endDate:(id)a2;
- (id)_icsDateStringForNSDateComponents:(id)a0;

@end
