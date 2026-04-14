@class NSString;

@interface HDWatchRemoteFeatureAvailabilityDataSource : NSObject <HKRemoteFeatureAvailabilityDataSource>

@property (copy, nonatomic) NSString *onboardingCountryCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)watchRegion;
- (id)watchModelNumber;
- (id)watchBuildType;
- (id)watchProductType;
- (struct { long long x0; long long x1; long long x2; })watchOSVersion;
- (struct { long long x0; long long x1; long long x2; })iOSVersion;
- (id)currentDeviceClass;
- (struct { long long x0; long long x1; long long x2; })watchAtrialFibrillationDetectionVersion;
- (id)iOSBuildVersion;
- (id)watchOSBuildVersion;
- (id)watchRegionInfo;
- (void).cxx_destruct;

@end
