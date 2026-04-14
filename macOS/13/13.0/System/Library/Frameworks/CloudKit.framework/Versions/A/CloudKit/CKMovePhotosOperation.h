@class CKMovePhotosOperationInfo, NSMutableDictionary, NSDictionary, NSArray, CKDatabase;
@protocol CKMovePhotosOperationCallbacks;

@interface CKMovePhotosOperation : CKDatabaseOperation <CKMovePhotosOperationCallbacks>

@property (retain, nonatomic) NSDictionary *moveChangesBySourceRecordID;
@property (retain, nonatomic) NSDictionary *moveChangesByDestinationRecordID;
@property (retain, nonatomic) NSMutableDictionary *recordErrorsBySourceRecordID;
@property (readonly, nonatomic) id<CKMovePhotosOperationCallbacks> clientOperationCallbackProxy;
@property (readonly, nonatomic) CKMovePhotosOperationInfo *operationInfo;
@property (copy, nonatomic) NSArray *moveChanges;
@property (retain, nonatomic) CKDatabase *sourceDatabase;
@property (copy, nonatomic) id /* block */ perRecordProgressBlock;
@property (copy, nonatomic) id /* block */ perRecordMoveBlock;
@property (copy, nonatomic) id /* block */ movePhotosCompletionBlock;

+ (void)applyDaemonCallbackInterfaceTweaks:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)fillOutOperationInfo:(id)a0;
- (void)fillFromOperationInfo:(id)a0;
- (BOOL)hasCKOperationCallbacksSet;
- (BOOL)CKOperationShouldRun:(id *)a0;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (id)activityCreate;
- (void)performCKOperation;
- (void)handleMoveForSourceRecordID:(id)a0 destinationMetadata:(id)a1 moveMarkerMetadata:(id)a2 error:(id)a3;
- (void)handleRecordIDsInFlight:(id)a0 reply:(id /* block */)a1;
- (void)handleRecordModificationForRecordID:(id)a0 didProgress:(double)a1;
- (void)handleSaveForRecordID:(id)a0 recordMetadata:(id)a1 error:(id)a2;
- (void)handleDeleteForRecordID:(id)a0 error:(id)a1;
- (void)handleRecordUploadForRecordID:(id)a0 recordKey:(id)a1 arrayIndex:(long long)a2 signature:(id)a3 size:(unsigned long long)a4 paddedFileSize:(unsigned long long)a5 uploaded:(BOOL)a6 uploadReceipt:(id)a7 uploadReceiptExpiration:(double)a8 wrappedAssetKey:(id)a9 clearAssetKey:(id)a10 referenceSignature:(id)a11;
- (id)initWithMoveChanges:(id)a0 sourceDatabase:(id)a1;
- (void)_trackAssetsToUpload;

@end
