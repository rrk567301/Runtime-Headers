@class NSLock;

@interface BSCoreTelephonyUtilities : NSObject

@property (retain, nonatomic) NSLock *lock;

- (id)init;
- (void).cxx_destruct;
- (id)defaultSubscriptionContextFromSubscriptionInfo;
- (char)isRCSChatBot:(id)a0;
- (id)subscriptionContextForSimID:(id)a0;

@end
