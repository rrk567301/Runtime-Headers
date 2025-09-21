@class NSArray;

@interface CKDDownloadAssetsOperationInfo : CKDatabaseOperationInfo

@property (nonatomic) char shouldFetchAssetContentInMemory;
@property (retain, nonatomic) NSArray *assetsToDownload;
@property (nonatomic) char shouldCloneFileInAssetCache;
@property (nonatomic) char fetchingAssetsForRereference;
@property (copy, nonatomic) id /* block */ cloneContextReturnBlock;
@property (retain, nonatomic) NSArray *assetsToDownloadInMemory;
@property (retain, nonatomic) NSArray *assetURLInfosToFillOut;

- (void).cxx_destruct;

@end
