@class NSString;
@protocol CalDAVPutCalendarItemTaskDelegate;

@interface CalDAVPutCalendarItemTask : CoreDAVPutTask

@property (nonatomic) id<CalDAVPutCalendarItemTaskDelegate> delegate;
@property (retain, nonatomic) NSString *previousScheduleTag;

- (id)additionalHeaderValues;
- (void).cxx_destruct;
- (id)description;

@end
