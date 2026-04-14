@class NSString;

@interface HDWatchRemoteFeatureAvailabilityDataSource : NSObject <HKRemoteFeatureAvailabilityDataSource>

@property (copy, nonatomic) NSString *onboardingCountryCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)iOSBuildVersion;
- (id)watchModelNumber;
- (id)watchBuildType;
- (void).cxx_destruct;
- (id)watchRegion;
- (struct { long long x0; long long x1; long long x2; })watchOSVersion;
- (id)watchProductType;
- (struct { long long x0; long long x1; long long x2; })iOSVersion;
- (id)currentDeviceClass;
- (struct { long long x0; long long x1; long long x2; })watchAtrialFibrillationDetectionVersion;
- (id)watchOSBuildVersion;
- (id)watchRegionInfo;

@end
