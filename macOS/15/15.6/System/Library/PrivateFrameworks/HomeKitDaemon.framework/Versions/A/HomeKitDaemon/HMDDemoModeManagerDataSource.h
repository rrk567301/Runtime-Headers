@class HMFProductInfo;
@protocol HMDDemoModeDataSourceProtocol;

@interface HMDDemoModeManagerDataSource : NSObject <HMDDemoModeDataSourceProtocol>

@property (class, nonatomic, retain) id<HMDDemoModeDataSourceProtocol> internalDataSource;
@property (class, nonatomic, retain) id<HMDDemoModeDataSourceProtocol> testDataSource;
@property (class, nonatomic, readonly) id<HMDDemoModeDataSourceProtocol> defaultDataSource;

@property (nonatomic, readonly) BOOL demoModeV2Enabled;
@property (nonatomic, readonly) BOOL demoModeV2EnabledAndActive;
@property (nonatomic, readonly) BOOL demoModeV2WithoutCKEnabled;
@property (nonatomic, readonly) BOOL demoModeMadeForDemoBundle;
@property (nonatomic, readonly) BOOL appleMediaAccessory;
@property (nonatomic, readonly) HMFProductInfo *productInfo;

+ (void)setTestDemoModeDataSource:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isAppleMediaAccessory;
- (BOOL)isDemoModeMadeForDemoBundle;
- (BOOL)isDemoModeV2Enabled;
- (BOOL)isDemoModeV2EnabledAndActive;
- (BOOL)isDemoModeV2WithoutCKEnabled;

@end
