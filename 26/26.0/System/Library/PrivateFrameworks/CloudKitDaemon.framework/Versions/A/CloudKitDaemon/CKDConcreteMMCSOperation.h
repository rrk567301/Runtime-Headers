@class NSString, CKDContainer, CKOperationInfo;
@protocol CKDOperationCallbackProxy;

@interface CKDConcreteMMCSOperation : NSObject <CKDMMCSOperationMethods>

@property (readonly, nonatomic) NSString *operationID;
@property (retain, nonatomic) CKOperationInfo *operationInfo;
@property (retain, nonatomic) CKDContainer *container;
@property (retain, nonatomic) id<CKDOperationCallbackProxy> clientOperationCallbackProxy;
@property (readonly, nonatomic) BOOL isLongLived;

- (id)openFileWithOpenInfo:(id)a0 error:(id *)a1;
- (id)initWithOperation:(id)a0;
- (void).cxx_destruct;
- (BOOL)finishWithAssetDownloadStagingInfo:(id)a0 fileURL:(id *)a1 fileHandle:(id *)a2 error:(id *)a3;

@end
