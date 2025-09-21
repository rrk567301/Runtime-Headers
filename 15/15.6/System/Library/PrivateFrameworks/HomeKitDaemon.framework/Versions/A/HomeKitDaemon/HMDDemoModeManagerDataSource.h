@class HMFProductInfo;
@protocol HMDDemoModeDataSourceProtocol;

@interface HMDDemoModeManagerDataSource : NSObject <HMDDemoModeDataSourceProtocol>

@property (class, nonatomic, retain) id<HMDDemoModeDataSourceProtocol> internalDataSource;
@property (class, nonatomic, retain) id<HMDDemoModeDataSourceProtocol> testDataSource;
@property (class, nonatomic, readonly) id<HMDDemoModeDataSourceProtocol> defaultDataSource;

@property (nonatomic, readonly) char demoModeV2Enabled;
@property (nonatomic, readonly) char demoModeV2EnabledAndActive;
@property (nonatomic, readonly) char demoModeV2WithoutCKEnabled;
@property (nonatomic, readonly) char demoModeMadeForDemoBundle;
@property (nonatomic, readonly) char appleMediaAccessory;
@property (nonatomic, readonly) HMFProductInfo *productInfo;

+ (void)setTestDemoModeDataSource:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (char)isAppleMediaAccessory;
- (char)isDemoModeMadeForDemoBundle;
- (char)isDemoModeV2Enabled;
- (char)isDemoModeV2EnabledAndActive;
- (char)isDemoModeV2WithoutCKEnabled;

@end
