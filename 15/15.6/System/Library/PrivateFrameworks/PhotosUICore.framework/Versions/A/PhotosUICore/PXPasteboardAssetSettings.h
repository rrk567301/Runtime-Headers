@interface PXPasteboardAssetSettings : PXSettings

@property (nonatomic) char fileURLEnabled;
@property (nonatomic) char imageDataEnabled;
@property (nonatomic) char alwaysUseDataProviderForObjectReference;
@property (nonatomic) char synchronousFullSizePreviewEnabled;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (id)parentSettings;

@end
