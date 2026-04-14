@class NSURL;

@interface CalDAVChangePublishStatusCalendarQueueableOperation : CalDAVCalendarQueueableOperation

@property (readonly, retain) NSURL *calendarURL;
@property (readonly) int action;

- (void).cxx_destruct;
- (void)performOperation;
- (id)initWithChangeRequest:(id)a0 session:(id)a1 action:(id)a2;

@end
