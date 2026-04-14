@interface SKINotificationsInvocation : NSObject

+ (id)announceNotificationsRequestFromNotification:(id)a0 fromApp:(id)a1 synchronousBurstIndex:(id)a2 isSameTypeAsLastAnnouncement:(BOOL)a3;
+ (id)announceNotificationsRequestFromAnnounceDirectInvocationPayload:(id)a0;

@end
