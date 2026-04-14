@class NSDateComponents;

@interface CalDAVCalendarQueryTask : CoreDAVPropFindTask

@property (nonatomic) BOOL syncEvents;
@property (nonatomic) BOOL syncTodos;
@property (retain, nonatomic) NSDateComponents *eventFilterStartDate;
@property (retain, nonatomic) NSDateComponents *eventFilterEndDate;

- (id)requestBody;
- (id)httpMethod;
- (id)description;
- (void)_appendTimeRangeFilterToXMLData:(id)a0 startDate:(id)a1 endDate:(id)a2;
- (void)_appendComponentFiltersToXMLData:(id)a0;
- (void).cxx_destruct;
- (id)_icsDateStringForNSDateComponents:(id)a0;

@end
