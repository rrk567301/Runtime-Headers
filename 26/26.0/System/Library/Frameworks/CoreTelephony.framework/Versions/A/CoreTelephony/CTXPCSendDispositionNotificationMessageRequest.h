@class CTLazuliDestination, CTLazuliGroupChatUri, CTLazuliMessageID;

@interface CTXPCSendDispositionNotificationMessageRequest : CTXPCSubscriptionContextRequest

@property (readonly, nonatomic) CTLazuliMessageID *messageID;
@property (readonly, nonatomic) long long notificationType;
@property (readonly, nonatomic) CTLazuliMessageID *notificationMessageID;
@property (readonly, nonatomic) CTLazuliDestination *destination;
@property (readonly, nonatomic) CTLazuliGroupChatUri *groupChatURI;

+ (id)allowedClassesForArguments;

- (id)ct_shortName;
- (int)requiredEntitlement;
- (id)security;
- (id)initWithContext:(id)a0 destination:(id)a1 messageID:(id)a2 notificationType:(long long)a3 notificationMessageID:(id)a4 security:(id)a5;
- (id)initWithContext:(id)a0 groupChatURI:(id)a1 destination:(id)a2 messageID:(id)a3 notificationType:(long long)a4 notificationMessageID:(id)a5 security:(id)a6;
- (void)performRequestWithHandler:(id)a0 completionHandler:(id /* block */)a1;

@end
