@interface PXSharedCollectionsSettings : PXSettings

@property (nonatomic) BOOL showCollaborationUIForExistingShares;
@property (nonatomic) BOOL showCollaborationUIToCreateNewShares;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (id)parentSettings;
- (void)setDefaultValues;

@end
