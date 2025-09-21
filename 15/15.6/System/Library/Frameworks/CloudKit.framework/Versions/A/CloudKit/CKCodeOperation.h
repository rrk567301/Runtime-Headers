@class NSError, CKCodeService, NSString, NSArray, NSURL, NSMutableDictionary, PBCodable, CKCodeFunctionInvokeOperationInfo;
@protocol CKCodeOperationCallbacks, CKCodeOperationMessageMutation;

@interface CKCodeOperation : CKDatabaseOperation <CKOperationInMemoryAssets, CKCodeOperationCallbacks>

@property (retain, nonatomic) Class responseClass;
@property (copy, nonatomic) NSString *serviceName;
@property (copy, nonatomic) NSString *functionName;
@property (nonatomic) long long destinationServer;
@property (copy, nonatomic) NSURL *destinationServerExplicitURL;
@property (retain, nonatomic) NSArray *requestLocalSerializations;
@property (retain, nonatomic) PBCodable<CKCodeOperationMessageMutation> *response;
@property (retain, nonatomic) NSError *responseError;
@property (readonly, nonatomic) id<CKCodeOperationCallbacks> clientOperationCallbackProxy;
@property (readonly, nonatomic) CKCodeFunctionInvokeOperationInfo *operationInfo;
@property (copy, nonatomic) id /* block */ didSubstituteRequestRecordTransportsBlock;
@property (retain, nonatomic) PBCodable<CKCodeOperationMessageMutation> *request;
@property (copy, nonatomic) id /* block */ perRecordCompletionBlock;
@property (copy, nonatomic) id /* block */ perRecordProgressBlock;
@property (copy, nonatomic) id /* block */ codeOperationCompletionBlock;
@property (copy, nonatomic) id /* block */ incompleteResponsePreviewBlock;
@property (nonatomic) char dropInMemoryAssetContentASAP;
@property (nonatomic) char shouldFetchAssetContentInMemory;
@property (retain, nonatomic) CKCodeService *codeService;
@property (retain, nonatomic) NSMutableDictionary *assetInfoByArrayIndexByRecordKeyByRecordID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)operationDaemonCallbackProtocol;
+ (void)applyDaemonCallbackInterfaceTweaks:(id)a0;
+ (SEL)daemonInvocationSelector;
+ (Class)operationInfoClass;

- (void).cxx_destruct;
- (char)CKOperationShouldRun:(id *)a0;
- (void)ckSignpostBegin;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (id)activityCreate;
- (void)ckSignpostEndWithError:(id)a0;
- (void)fillFromOperationInfo:(id)a0;
- (void)fillOutOperationInfo:(id)a0;
- (void)handleAssetDataForRecordID:(id)a0 recordKey:(id)a1 arrayIndex:(long long)a2 data:(id)a3 offset:(unsigned long long)a4;
- (void)handleFetchForRecordID:(id)a0 didProgress:(double)a1;
- (void)handleFetchForRecordID:(id)a0 record:(id)a1 error:(id)a2;
- (void)handleInitialResponseReceived:(id)a0 reply:(id /* block */)a1;
- (void)handleReplaceLocalWithWireSerializations:(id)a0 encryptedMasterKeys:(id)a1 wireEnvelopes:(id)a2 reply:(id /* block */)a3;
- (void)handleReplaceWireSerializationsWithRecords:(id)a0;
- (char)hasCKOperationCallbacksSet;
- (id)initWithFunctionName:(id)a0 responseClass:(Class)a1;
- (id)initWithServiceName:(id)a0 functionName:(id)a1 responseClass:(Class)a2;
- (void)performCKOperation;

@end
