@class NSDate;

@interface EKCalendarProposeNewTimeNotification : EKCalendarNotification

@property (readonly, nonatomic) NSDate *proposedStartDate;
@property (readonly, nonatomic) NSDate *proposedEndDate;

- (unsigned long long)supportedActions;
- (id)initWithRelatedEvent:(id)a0;
- (BOOL)isProposedNewTime;
- (id)proposingAttendee;
- (BOOL)proposedEndDateIsInFuture;

@end
