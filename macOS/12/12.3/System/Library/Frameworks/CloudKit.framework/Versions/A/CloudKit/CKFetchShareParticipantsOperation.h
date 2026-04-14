@class NSMutableDictionary, NSArray, NSMutableSet, CKFetchShareParticipantsOperationInfo;
@protocol CKFetchShareParticipantsOperationCallbacks;

@interface CKFetchShareParticipantsOperation : CKOperation <CKFetchShareParticipantsOperationCallbacks>

@property (retain, nonatomic) NSMutableSet *discoveredUserIdentities;
@property (retain, nonatomic) NSMutableDictionary *lookupErrors;
@property (readonly, nonatomic) id<CKFetchShareParticipantsOperationCallbacks> clientOperationCallbackProxy;
@property (readonly, nonatomic) CKFetchShareParticipantsOperationInfo *operationInfo;
@property (copy, nonatomic) NSArray *userIdentityLookupInfos;
@property (copy, nonatomic) id /* block */ shareParticipantFetchedBlock;
@property (copy, nonatomic) id /* block */ perShareParticipantCompletionBlock;
@property (copy, nonatomic) id /* block */ fetchShareParticipantsCompletionBlock;

+ (void)applyDaemonCallbackInterfaceTweaks:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithUserIdentityLookupInfos:(id)a0;
- (void)fillOutOperationInfo:(id)a0;
- (void)fillFromOperationInfo:(id)a0;
- (BOOL)hasCKOperationCallbacksSet;
- (BOOL)CKOperationShouldRun:(id *)a0;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (id)activityCreate;
- (void)performCKOperation;
- (void)handleShareParticipantFetchForLookupInfo:(id)a0 shareParticipant:(id)a1 error:(id)a2;

@end
