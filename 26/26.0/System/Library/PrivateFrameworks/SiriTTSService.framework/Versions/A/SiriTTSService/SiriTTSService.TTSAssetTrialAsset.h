@class NSString, NSArray, NSBundle, NSNumber, TTSAssetSource;

@interface SiriTTSService.TTSAssetTrialAsset : TTSAsset {
    void /* unknown type, empty encoding */ factorName;
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
@property (nonatomic, readonly) BOOL downloading;
@property (nonatomic, readonly) BOOL purgeable;
@property (nonatomic, readonly) BOOL locallyAvailable;
@property (nonatomic, readonly) long long purgeCondition;

- (void)purgeThen:(id /* block */)a0;
- (id)init;
- (void)cancelDownloadingThen:(id /* block */)a0;
- (void).cxx_destruct;
- (void)downloadWithOptions:(unsigned long long)a0 progress:(id /* block */)a1 then:(id /* block */)a2;
- (void)setPurgeCondition:(long long)a0;

@end
