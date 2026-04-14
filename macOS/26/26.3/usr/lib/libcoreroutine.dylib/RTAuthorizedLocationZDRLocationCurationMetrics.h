@interface RTAuthorizedLocationZDRLocationCurationMetrics : NSObject

@property int numberOfZDRLocationsHome;
@property int numberOfZDRLocationsWork;
@property int numberOfZDRLocationsSchool;
@property int totalZDRLocations;
@property BOOL isZDRHomeLearnedALoi;
@property BOOL isZDRWorkLearnedALoi;
@property BOOL isZDRSchoolLearnedALoi;
@property BOOL isZDRSetupLearnedALoi;

- (id)init;

@end
