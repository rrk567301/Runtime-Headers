@interface PXWorkaroundSettings : PXSettings

@property (nonatomic) BOOL shouldWorkAround53118165;
@property (nonatomic) BOOL shouldWorkAround92398340;
@property (nonatomic) BOOL shouldWorkAround102440195;
@property (nonatomic) BOOL shouldWorkAround104295292;
@property (nonatomic) BOOL shouldWorkAround128269285;
@property (nonatomic) BOOL shouldWorkAround133571598;
@property (nonatomic) long long workAround128798032;
@property (nonatomic) BOOL shouldWorkAround139627593;
@property (nonatomic) BOOL shouldWorkAround148760530;
@property (nonatomic) BOOL shouldWorkAround149747434;
@property (nonatomic) BOOL shouldWorkAround152038050;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (long long)version;
- (id)parentSettings;

@end
