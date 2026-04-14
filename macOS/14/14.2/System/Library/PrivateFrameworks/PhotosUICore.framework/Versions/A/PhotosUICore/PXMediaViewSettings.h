@interface PXMediaViewSettings : PXSettings

@property (nonatomic) BOOL enableDemoActionInGrids;
@property (nonatomic) long long transitionType;
@property (nonatomic) BOOL showMediaControls;
@property (nonatomic) BOOL demoMultipleMediaViews;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (id)parentSettings;

@end
