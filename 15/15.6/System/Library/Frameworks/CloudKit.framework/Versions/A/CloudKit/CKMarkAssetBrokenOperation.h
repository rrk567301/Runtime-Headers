@class NSString, CKRecordID, CKUploadRequestConfiguration, CKMarkAssetBrokenOperationInfo;
@protocol CKMarkAssetBrokenOperationCallbacks;

@interface CKMarkAssetBrokenOperation : CKDatabaseOperation <CKMarkAssetBrokenOperationCallbacks>

@property (retain, nonatomic) CKRecordID *recordID;
@property (retain, nonatomic) NSString *field;
@property (nonatomic) long long listIndex;
@property (retain, nonatomic) CKRecordID *repairRecordID;
@property (readonly, nonatomic) id<CKMarkAssetBrokenOperationCallbacks> clientOperationCallbackProxy;
@property (readonly, nonatomic) CKMarkAssetBrokenOperationInfo *operationInfo;
@property (copy, nonatomic) CKUploadRequestConfiguration *uploadRequestConfiguration;
@property (readonly, copy, nonatomic) CKUploadRequestConfiguration *resolvedUploadRequestConfiguration;
@property (copy, nonatomic) id /* block */ markAssetBrokenCompletionBlock;
@property (nonatomic) char touchRepairZone;
@property (nonatomic) char bypassPCSEncryptionForTouchRepairZone;
@property (nonatomic) char simulateCorruptAsset;
@property (nonatomic) char writeRepairRecord;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)applyDaemonCallbackInterfaceTweaks:(id)a0;
+ (SEL)daemonInvocationSelector;

- (void).cxx_destruct;
- (char)CKOperationShouldRun:(id *)a0;
- (void)ckSignpostBegin;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (id)activityCreate;
- (void)ckSignpostEndWithError:(id)a0;
- (void)fillFromOperationInfo:(id)a0;
- (void)fillOutOperationInfo:(id)a0;
- (void)handleMarkAssetBrokenCompletionWithRepairRecordID:(id)a0 error:(id)a1;
- (char)hasCKOperationCallbacksSet;
- (id)initWithNoRecord;
- (id)initWithRecordID:(id)a0 field:(id)a1;
- (id)initWithRecordID:(id)a0 field:(id)a1 listIndex:(long long)a2;

@end
