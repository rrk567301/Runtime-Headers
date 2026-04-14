@protocol EMVIPReader, EMBlockedSenderReader;

@interface EDUserNotificationFilter : NSObject

@property (readonly, nonatomic) id<EMBlockedSenderReader> blockedSenderReader;
@property (readonly, nonatomic) id<EMVIPReader> vipReader;

- (void).cxx_destruct;
- (id)initWithBlockedSenderReader:(id)a0 vipReader:(id)a1;
- (id)messagesNeedingNotification:(id)a0;
- (BOOL)_messageNeedsNotification:(id)a0;

@end
