@interface EKCalendarSharedCalendarNotification : EKCalendarNotification

@property (readonly, nonatomic) unsigned long long cachedJunkStatus;

- (id)invitation;
- (unsigned long long)supportedActions;
- (BOOL)isSharedCalendarInvitation;
- (BOOL)couldBeJunk;
- (id)sendersEmail;
- (id)sendersPhoneNumber;
- (BOOL)supportsJunkReporting;
- (id)calendarTitle;
- (void)setIsJunk:(BOOL)a0 shouldSave:(BOOL)a1;

@end
