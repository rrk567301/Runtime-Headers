@class CTLazuliDestination, CTLazuliGroupChatUri, CTLazuliSecurity, CTLazuliMessageText, CTLazuliMessageID;

@interface CTXPCSendTextMessageRequest : CTXPCSubscriptionContextRequest

@property (readonly, nonatomic) CTLazuliMessageID *messageID;
@property (readonly, nonatomic) CTLazuliMessageText *message;
@property (readonly, nonatomic) CTLazuliDestination *destination;
@property (readonly, nonatomic) CTLazuliGroupChatUri *groupChatURI;
@property (readonly, nonatomic) CTLazuliSecurity *security;

+ (id)allowedClassesForArguments;
+ (BOOL)isSensitiveMessage;

- (id)ct_shortName;
- (int)requiredEntitlement;
- (id)initWithContext:(id)a0 destination:(id)a1 messageID:(id)a2 message:(id)a3 security:(id)a4;
- (id)initWithContext:(id)a0 groupChatURI:(id)a1 messageID:(id)a2 message:(id)a3 security:(id)a4;
- (void)performRequestWithHandler:(id)a0 completionHandler:(id /* block */)a1;

@end
