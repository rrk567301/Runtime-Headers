@class CTLazuliGroupChatParticipantList, CTLazuliOperationID, CTLazuliGroupChatUri;

@interface CTXPCRemoveParticipantsRequest : CTXPCSubscriptionContextRequest

@property (readonly, nonatomic) CTLazuliGroupChatUri *groupChatURI;
@property (readonly, nonatomic) CTLazuliGroupChatParticipantList *participants;
@property (readonly, nonatomic) CTLazuliOperationID *operationID;

+ (id)allowedClassesForArguments;

- (id)ct_shortName;
- (int)requiredEntitlement;
- (id)security;
- (id)initWithContext:(id)a0 groupChatURI:(id)a1 participants:(id)a2 operationID:(id)a3 security:(id)a4;
- (void)performRequestWithHandler:(id)a0 completionHandler:(id /* block */)a1;

@end
