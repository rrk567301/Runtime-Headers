@class NSArray, NSDictionary;

@interface CKDUploadAssetsOperationInfo : CKDatabaseOperationInfo

@property (retain, nonatomic) NSArray *assetsToUpload;
@property (retain, nonatomic) NSDictionary *assetUUIDToExpectedProperties;
@property (retain, nonatomic) NSDictionary *packageUUIDToExpectedProperties;
@property (nonatomic) char temporary;
@property (nonatomic) char shouldCloneFileInAssetCache;
@property (retain, nonatomic) NSDictionary *cloneContextsBySignature;

- (void).cxx_destruct;

@end
