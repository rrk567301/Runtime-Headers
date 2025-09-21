@class CKUploadRequestMetadata;

@interface CKDMarkAssetBrokenURLRequest : CKDURLRequest

@property (copy, nonatomic) CKUploadRequestMetadata *metadata;
@property (nonatomic) char writeRepairRecord;
@property (copy, nonatomic) id /* block */ assetBrokenBlock;

- (void).cxx_destruct;
- (void)fillOutEquivalencyPropertiesBuilder:(id)a0;
- (void)fillOutRequestProperties:(id)a0;
- (id)generateRequestOperations;
- (id)initWithOperation:(id)a0 assetOrPackageMetadata:(id)a1 writeRepairRecord:(char)a2;
- (void)requestDidParseNodeFailure:(id)a0;
- (id)requestDidParseProtobufObject:(id)a0;
- (id)requestOperationClasses;

@end
