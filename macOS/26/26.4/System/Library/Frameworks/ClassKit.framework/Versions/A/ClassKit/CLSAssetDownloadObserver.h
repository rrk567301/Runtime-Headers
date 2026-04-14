@class NSError, CLSAbstractAsset;

@interface CLSAssetDownloadObserver : NSObject

@property (retain, nonatomic) CLSAbstractAsset *asset;
@property (nonatomic, getter=isDownloaded) BOOL downloaded;
@property (readonly) double downloadProgress;
@property (readonly) NSError *downloadError;
@property (copy, nonatomic) id /* block */ onDownloadProgress;
@property (copy, nonatomic) id /* block */ onDownloadComplete;

- (void)startObserving;
- (id)initWithAsset:(id)a0;
- (void).cxx_destruct;
- (void)stopObserving;

@end
