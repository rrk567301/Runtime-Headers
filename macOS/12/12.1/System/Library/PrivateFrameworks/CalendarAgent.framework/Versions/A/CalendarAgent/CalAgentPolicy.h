@protocol CalAgentTCCChecker;

@interface CalAgentPolicy : NSXPCStoreServerRequestHandlingPolicy

@property (readonly, nonatomic) id<CalAgentTCCChecker> tccChecker;

+ (id)userInfoTccTokenName;

- (void).cxx_destruct;
- (BOOL)shouldAcceptConnectionsFromClientWithContext:(id)a0;
- (BOOL)shouldAcceptMetadataChangesFromClientWithContext:(id)a0;
- (id)restrictingWritePredicateForEntity:(id)a0 fromClientWithContext:(id)a1;
- (id)restrictingReadPredicateForEntity:(id)a0 fromClientWithContext:(id)a1;
- (id)initWithTCCChecker:(id)a0;
- (id)_userInfoForContext:(id)a0;
- (id)_cachedTCCResultForUserInfo:(id)a0;
- (long long)_shouldAcceptIncomingRequestFromClientWithContext:(id)a0;
- (id)_restrictingPredicateForEntity:(id)a0 fromClientWithContext:(id)a1;

@end
