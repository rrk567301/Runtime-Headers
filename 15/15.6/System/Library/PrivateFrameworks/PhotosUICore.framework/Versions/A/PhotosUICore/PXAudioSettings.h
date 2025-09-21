@interface PXAudioSettings : PXSettings

@property (nonatomic) char workaround80278485;
@property (nonatomic) char flexReturnOnlyLocalSongs;
@property (nonatomic) char flexSimulateDownloadFailure;
@property (nonatomic) char flexSimulateAssetFetchFailure;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (id)parentSettings;

@end
