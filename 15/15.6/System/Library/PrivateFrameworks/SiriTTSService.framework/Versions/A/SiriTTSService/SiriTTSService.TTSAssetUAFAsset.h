@class NSString, NSArray, NSBundle, NSNumber, TTSAssetSource;

@interface SiriTTSService.TTSAssetUAFAsset : TTSAsset {
    void /* unknown type, empty encoding */ factorIdentifier;
    void /* unknown type, empty encoding */ assetAttr;
    void /* unknown type, empty encoding */ path;
    void /* unknown type, empty encoding */ isDownloading;
    void /* unknown type, empty encoding */ downloadToken;
    void /* unknown type, empty encoding */ progressQueue;
}

@property (nonatomic, readonly) TTSAssetSource *assetSource;
@property (nonatomic, readonly) long long versionNumber;
@property (nonatomic, readonly) NSString *versionDescription;
@property (nonatomic, readonly) NSNumber *downloadSize;
@property (nonatomic, readonly) NSNumber *diskSize;
@property (nonatomic, readonly) NSArray *supportedLanguages;
@property (nonatomic, readonly) NSBundle *bundle;
@property (nonatomic, readonly) char downloading;
@property (nonatomic, readonly) char purgeable;
@property (nonatomic, readonly) char locallyAvailable;

- (id)init;
- (void).cxx_destruct;
- (void)purge;
- (void)cancelDownloadingThen:(id /* block */)a0;
- (void)downloadWithReservation:(id)a0 useBattery:(char)a1 progress:(id /* block */)a2 then:(id /* block */)a3;
- (void)purgeImmediately:(char)a0;

@end
