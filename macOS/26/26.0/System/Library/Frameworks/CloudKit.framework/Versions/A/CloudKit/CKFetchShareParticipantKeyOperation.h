@class NSArray, NSMutableDictionary, NSDictionary, NSString, CKFetchShareParticipantKeyOperationInfo;
@protocol CKFetchShareParticipantKeyOperationCallbacks;

@interface CKFetchShareParticipantKeyOperation : CKDatabaseOperation <CKFetchShareParticipantKeyOperationCallbacks>

@property (copy, nonatomic) NSArray *shareIDs;
@property (retain, nonatomic) NSMutableDictionary *errorsByShareID;
@property (readonly, nonatomic) id<CKFetchShareParticipantKeyOperationCallbacks> clientOperationCallbackProxy;
@property (readonly, nonatomic) CKFetchShareParticipantKeyOperationInfo *operationInfo;
@property (copy, nonatomic) NSDictionary *baseTokensByShareID;
@property (copy, nonatomic) NSDictionary *childRecordIDsByShareID;
@property (copy, nonatomic) id /* block */ shareParticipantKeyFetchedBlock;
@property (copy, nonatomic) id /* block */ shareParticipantKeyCompletionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)applyDaemonCallbackInterfaceTweaks:(id)a0;
+ (SEL)daemonInvocationSelector;

- (BOOL)CKOperationShouldRun:(id *)a0;
- (id)activityCreate;
- (void)ckSignpostEndWithError:(id)a0;
- (void)ckSignpostBegin;
- (void)fillOutOperationInfo:(id)a0;
- (void)fillFromOperationInfo:(id)a0;
- (BOOL)hasCKOperationCallbacksSet;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (void).cxx_destruct;
- (void)handleParticipantKeyFetchForRecordID:(id)a0 participantKey:(id)a1 error:(id)a2;
- (id)initWithShareIDs:(id)a0;

@end
