@interface PXWorkaroundSettings : PXSettings

@property (nonatomic) char shouldWorkAround53118165;
@property (nonatomic) char shouldWorkAround92398340;
@property (nonatomic) char shouldWorkAround102440195;
@property (nonatomic) char shouldWorkAround104295292;
@property (nonatomic) char shouldWorkAround128269285;
@property (nonatomic) char shouldWorkAround133571598;
@property (nonatomic) long long workAround128798032;
@property (nonatomic) char shouldWorkAround139627593;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (long long)version;
- (void)setDefaultValues;
- (id)parentSettings;

@end
