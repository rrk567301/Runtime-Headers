@interface EKCalendarResourceChangeNotification : EKCalendarNotification

- (id)location;
- (id)startDate;
- (id)updateCount;
- (BOOL)allDay;
- (unsigned long long)supportedActions;
- (BOOL)isResourceChange;
- (id)createCount;
- (id)deleteCount;

@end
