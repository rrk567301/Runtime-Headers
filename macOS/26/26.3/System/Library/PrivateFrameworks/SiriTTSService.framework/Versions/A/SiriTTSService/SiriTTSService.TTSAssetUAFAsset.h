@class NSString, NSArray, NSBundle, NSNumber, TTSAssetSource;

@interface SiriTTSService.TTSAssetUAFAsset : TTSAsset {
    void /* unknown type, empty encoding */ factorIdentifier;
    void /* unknown type, empty encoding */ assetAttr;
    void /* unknown type, empty encoding */ path;
    void /* unknown type, empty encoding */ isDirty;
    void /* unknown type, empty encoding */ isDownloading;
    void /* unknown type, empty encoding */ updateCounter;
    void /* unknown type, empty encoding */ progressQueue;
    void /* unknown type, empty encoding */ lazyDownloadSize;
    void /* unknown type, empty encoding */ lazyDiskSize;
    void /* unknown type, empty encoding */ lazySupportedLanguages;
    void /* unknown type, empty encoding */ experimentId;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) TTSAssetSource *assetSource;
@property (nonatomic, readonly) long long versionNumber;
@property (nonatomic, readonly) NSString *versionDescription;
@property (nonatomic, readonly) NSNumber *downloadSize;
@property (nonatomic, readonly) NSNumber *diskSize;
@property (nonatomic, readonly) NSArray *supportedLanguages;
@property (nonatomic, readonly) NSBundle *bundle;
@property (nonatomic, readonly) BOOL downloading;
@property (nonatomic, readonly) BOOL purgeable;
@property (nonatomic, readonly) BOOL locallyAvailable;

- (void)cancelDownloadingThen:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;
- (void)purgeThen:(id /* block */)a0;
- (void)downloadWithOptions:(unsigned long long)a0 progress:(id /* block */)a1 then:(id /* block */)a2;

@end
