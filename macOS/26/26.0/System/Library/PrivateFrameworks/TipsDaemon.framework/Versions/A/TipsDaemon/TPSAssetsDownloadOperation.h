@class NSString, NSURL;

@interface TPSAssetsDownloadOperation : TPSAsyncOperation {
    void /* function */ assetIdentifier;
    void /* unknown type, empty encoding */ downloadedURL;
    void /* unknown type, empty encoding */ assetURLPath;
    void /* unknown type, empty encoding */ priority;
    void /* unknown type, empty encoding */ urlSessionItem;
}

@property (nonatomic, copy) NSString *assetIdentifier;
@property (nonatomic, copy) NSURL *downloadedURL;

- (void)main;
- (id)init;
- (void).cxx_destruct;
- (id)initWithAssetIdentifier:(id)a0 assetURLPath:(id)a1;

@end
