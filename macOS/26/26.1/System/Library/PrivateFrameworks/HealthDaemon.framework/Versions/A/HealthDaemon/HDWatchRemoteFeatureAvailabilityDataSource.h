@class NSString;

@interface HDWatchRemoteFeatureAvailabilityDataSource : NSObject <HKRemoteFeatureAvailabilityDataSource>

@property (copy, nonatomic) NSString *onboardingCountryCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)currentDeviceClass;
- (id)watchRegion;
- (struct { long long x0; long long x1; long long x2; })iOSVersion;
- (struct { long long x0; long long x1; long long x2; })watchAtrialFibrillationDetectionVersion;
- (id)iOSBuildVersion;
- (id)watchRegionInfo;
- (id)watchBuildType;
- (struct { long long x0; long long x1; long long x2; })watchOSVersion;
- (void).cxx_destruct;
- (id)watchModelNumber;
- (id)watchOSBuildVersion;
- (id)watchProductType;

@end
