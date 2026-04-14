@class NSString;
@protocol CalDAVPostCalendarItemTaskDelegate;

@interface CalDAVPostCalendarItemTask : CoreDAVPostTask

@property (nonatomic) id<CalDAVPostCalendarItemTaskDelegate> delegate;
@property (retain, nonatomic) NSString *previousScheduleTag;

- (id)additionalHeaderValues;
- (void)finishCoreDAVTaskWithError:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
