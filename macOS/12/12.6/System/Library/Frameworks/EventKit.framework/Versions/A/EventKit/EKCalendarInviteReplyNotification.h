@interface EKCalendarInviteReplyNotification : EKCalendarNotification

@property (readonly) unsigned long long status;

- (BOOL)isSharedCalendarReply;
- (unsigned long long)_ekStatusForType:(id)a0;

@end
