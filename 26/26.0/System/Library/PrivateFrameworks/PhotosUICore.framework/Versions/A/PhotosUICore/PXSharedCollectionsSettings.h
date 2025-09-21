@interface PXSharedCollectionsSettings : PXSettings

@property (nonatomic) BOOL showCollaborationUIForExistingShares;
@property (nonatomic) BOOL showCollaborationUIToCreateNewShares;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (id)parentSettings;

@end
