@class PHImportCanceler, PHImportAsset;

@interface PHImportAssetDataRequest : NSObject {
    PHImportCanceler *_canceler;
}

@property (copy, nonatomic) id /* block */ cancelBlock;
@property (retain, nonatomic) PHImportAsset *asset;
@property (readonly, nonatomic) PHImportAsset *requestAsset;

- (id)initWithAsset:(id)a0;
- (BOOL)isCanceled;
- (void)cancel;
- (void).cxx_destruct;

@end
