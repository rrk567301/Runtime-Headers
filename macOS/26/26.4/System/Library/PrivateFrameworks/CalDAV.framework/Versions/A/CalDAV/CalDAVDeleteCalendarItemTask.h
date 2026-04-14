@class NSString;

@interface CalDAVDeleteCalendarItemTask : CoreDAVDeleteTask

@property (retain, nonatomic) NSString *previousScheduleTag;

- (id)additionalHeaderValues;
- (void).cxx_destruct;
- (id)description;

@end
