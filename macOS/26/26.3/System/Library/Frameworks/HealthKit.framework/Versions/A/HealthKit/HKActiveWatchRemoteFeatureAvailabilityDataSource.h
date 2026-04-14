@class NSString;

@interface HKActiveWatchRemoteFeatureAvailabilityDataSource : NSObject <HKRemoteFeatureAvailabilityDataSource>

@property (copy, nonatomic) NSString *onboardingCountryCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)watchRegionInfo;
- (struct { long long x0; long long x1; long long x2; })watchOSVersion;
- (id)watchProductType;
- (id)init;
- (id)watchModelNumber;
- (struct { long long x0; long long x1; long long x2; })iOSVersion;
- (id)watchRegion;
- (void).cxx_destruct;
- (struct { long long x0; long long x1; long long x2; })watchAtrialFibrillationDetectionVersion;
- (id)watchOSBuildVersion;
- (id)currentDeviceClass;
- (id)iOSBuildVersion;
- (id)watchBuildType;

@end
