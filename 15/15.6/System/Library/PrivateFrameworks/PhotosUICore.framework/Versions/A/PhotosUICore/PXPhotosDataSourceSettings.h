@interface PXPhotosDataSourceSettings : PXSettings

@property (nonatomic) char slowBackgroundFetch;
@property (nonatomic) char disableKeyAssetCuration;
@property (nonatomic) double delayChanges;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (id)parentSettings;

@end
