@class NSLock;

@interface BSCoreTelephonyUtilities : NSObject

@property (retain, nonatomic) NSLock *lock;

- (void).cxx_destruct;
- (id)init;
- (id)defaultSubscriptionContextFromSubscriptionInfo;
- (BOOL)isRCSChatBot:(id)a0;
- (id)subscriptionContextForSimID:(id)a0;

@end
