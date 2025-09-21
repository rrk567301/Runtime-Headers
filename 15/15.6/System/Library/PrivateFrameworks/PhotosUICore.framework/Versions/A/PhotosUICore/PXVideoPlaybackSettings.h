@interface PXVideoPlaybackSettings : PXSettings

@property (nonatomic) char isDownloadingVideoSegmentsEnabled;
@property (nonatomic) double maxHighlightFractionForDisplay;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (id)parentSettings;

@end
