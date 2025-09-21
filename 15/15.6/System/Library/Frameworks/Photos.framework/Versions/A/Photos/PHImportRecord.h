@class PHImportTimerCollection, NSString, NSMutableArray, PHImportAsset;

@interface PHImportRecord : PHImportExceptionRecorder {
    NSString *_rawAssetIdentifier;
}

@property (retain, nonatomic) NSMutableArray *relatedRecords;
@property (nonatomic) char referencedImport;
@property (retain, nonatomic) NSString *assetIdentifier;
@property (readonly, nonatomic) NSString *rawAssetIdentifier;
@property (retain, nonatomic) PHImportAsset *importAsset;
@property (retain, nonatomic) NSString *downloadedPath;
@property (retain, nonatomic) PHImportTimerCollection *timers;
@property (nonatomic) unsigned char importType;
@property (readonly) char canReference;

- (id)description;
- (void).cxx_destruct;
- (id)allImportAssets;
- (id)recordForAsset:(id)a0;
- (void)addRelatedRecord:(id)a0;
- (id)allAssetIdentifiers;
- (id)allImportRecords;
- (void)cleanupAfterFailure;
- (id)descriptionWithPrefix:(id)a0;
- (id)initWithImportAsset:(id)a0;
- (char)needsDownload;

@end
