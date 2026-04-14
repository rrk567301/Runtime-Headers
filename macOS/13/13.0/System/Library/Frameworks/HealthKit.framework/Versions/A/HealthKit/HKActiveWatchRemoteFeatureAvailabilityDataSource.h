@class NSString;

@interface HKActiveWatchRemoteFeatureAvailabilityDataSource : NSObject <HKRemoteFeatureAvailabilityDataSource>

@property (copy, nonatomic) NSString *onboardingCountryCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (struct { long long x0; long long x1; long long x2; })iOSVersion;
- (id)iOSBuildVersion;
- (struct { long long x0; long long x1; long long x2; })watchOSVersion;
- (id)watchModelNumber;
- (id)watchProductType;
- (id)watchBuildType;
- (id)watchRegion;
- (id)watchRegionInfo;
- (id)watchOSBuildVersion;
- (id)watchCompanionDevicePlatform;
- (struct { long long x0; long long x1; long long x2; })watchAtrialFibrillationDetectionVersion;
- (struct { long long x0; long long x1; long long x2; })watchElectrocardiogramVersion;

@end
