@class PHImportCanceler, PHImportAsset;

@interface PHImportAssetDataRequest : NSObject {
    PHImportCanceler *_canceler;
}

@property (copy, nonatomic) id /* block */ cancelBlock;
@property (retain, nonatomic) PHImportAsset *asset;
@property (readonly, nonatomic) PHImportAsset *requestAsset;

- (id)initWithAsset:(id)a0;
- (void)cancel;
- (BOOL)isCanceled;
- (void).cxx_destruct;

@end
