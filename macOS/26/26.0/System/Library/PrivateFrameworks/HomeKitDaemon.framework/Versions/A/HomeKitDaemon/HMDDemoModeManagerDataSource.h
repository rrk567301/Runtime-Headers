@class HMFProductInfo;
@protocol HMDDemoModeManagerDataSource, HMDHH2FrameworkSwitchDataSource;

@interface HMDDemoModeManagerDataSource : NSObject <HMDDemoModeManagerDataSource>

@property (class, nonatomic, readonly) id<HMDDemoModeManagerDataSource> defaultDataSource;

@property (nonatomic, readonly) BOOL demoModeV2Enabled;
@property (nonatomic, readonly) BOOL demoModeV2EnabledAndActive;
@property (nonatomic, readonly) BOOL demoModeV2WithoutCKEnabled;
@property (nonatomic, readonly) BOOL demoModeMadeForDemoBundle;
@property (nonatomic, readonly) BOOL appleMediaAccessory;
@property (nonatomic, readonly) BOOL demoModeLocked;
@property (nonatomic, readonly) BOOL loadDemoModeBackupConfiguration;
@property (nonatomic, readonly) HMFProductInfo *productInfo;
@property (nonatomic, retain) id<HMDHH2FrameworkSwitchDataSource> frameworkSwitchDataSource;

+ (void)setDefaultDataSourceOverride:(id)a0;

- (BOOL)isDemoModeV2WithoutCKEnabled;
- (id)init;
- (BOOL)isDemoModeV2Enabled;
- (BOOL)isAppleMediaAccessory;
- (void).cxx_destruct;
- (BOOL)isDemoModeLocked;
- (BOOL)isDemoModeMadeForDemoBundle;
- (BOOL)isDemoModeV2EnabledAndActive;

@end
