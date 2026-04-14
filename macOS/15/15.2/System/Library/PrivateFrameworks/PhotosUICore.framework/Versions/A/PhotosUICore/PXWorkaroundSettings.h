@interface PXWorkaroundSettings : PXSettings

@property (nonatomic) BOOL shouldWorkAround53118165;
@property (nonatomic) BOOL shouldWorkAround92398340;
@property (nonatomic) BOOL shouldWorkAround102440195;
@property (nonatomic) BOOL shouldWorkAround104295292;
@property (nonatomic) BOOL shouldWorkAround128269285;
@property (nonatomic) BOOL shouldWorkAround133571598;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (long long)version;
- (void)setDefaultValues;
- (id)parentSettings;

@end
