@interface PXDuplicatesSettings : PXSettings

@property (nonatomic) char showDuplicateGroupsWithASingleAsset;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (id)parentSettings;

@end
