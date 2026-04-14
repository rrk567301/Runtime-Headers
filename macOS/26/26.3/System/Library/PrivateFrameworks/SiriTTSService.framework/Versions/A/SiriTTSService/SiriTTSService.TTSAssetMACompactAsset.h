@class NSBundle, TTSAssetQuality;

@interface SiriTTSService.TTSAssetMACompactAsset : SiriTTSService.TTSAssetMAAsset

@property (nonatomic, readonly) TTSAssetQuality *quality;
@property (nonatomic, readonly) NSBundle *bundle;
@property (nonatomic, readonly) BOOL purgeable;

- (void)purgeThen:(id /* block */)a0;
- (void)purgeImmediately:(BOOL)a0;

@end
