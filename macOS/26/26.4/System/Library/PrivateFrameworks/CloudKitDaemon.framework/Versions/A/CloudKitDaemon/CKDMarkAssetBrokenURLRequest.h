@class CKUploadRequestMetadata;

@interface CKDMarkAssetBrokenURLRequest : CKDURLRequest

@property (copy, nonatomic) CKUploadRequestMetadata *metadata;
@property (nonatomic) BOOL writeRepairRecord;
@property (copy, nonatomic) id /* block */ assetBrokenBlock;

- (id)requestDidParseProtobufObject:(id)a0;
- (void)requestDidParseNodeFailure:(id)a0;
- (id)requestOperationClasses;
- (void)fillOutRequestProperties:(id)a0;
- (void)fillOutEquivalencyPropertiesBuilder:(id)a0;
- (id)generateRequestOperations;
- (void).cxx_destruct;
- (id)initWithOperation:(id)a0 assetOrPackageMetadata:(id)a1 writeRepairRecord:(BOOL)a2;

@end
