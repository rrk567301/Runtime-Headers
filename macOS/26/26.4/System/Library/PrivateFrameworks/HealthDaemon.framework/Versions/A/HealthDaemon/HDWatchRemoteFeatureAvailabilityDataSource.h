@class NSString;

@interface HDWatchRemoteFeatureAvailabilityDataSource : NSObject <HKRemoteFeatureAvailabilityDataSource>

@property (copy, nonatomic) NSString *onboardingCountryCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)watchRegionInfo;
- (id)watchBuildType;
- (id)iOSBuildVersion;
- (struct { long long x0; long long x1; long long x2; })watchOSVersion;
- (void).cxx_destruct;
- (struct { long long x0; long long x1; long long x2; })watchAtrialFibrillationDetectionVersion;
- (id)watchOSBuildVersion;
- (id)watchProductType;
- (struct { long long x0; long long x1; long long x2; })iOSVersion;
- (id)watchRegion;
- (id)watchModelNumber;
- (id)currentDeviceClass;

@end
