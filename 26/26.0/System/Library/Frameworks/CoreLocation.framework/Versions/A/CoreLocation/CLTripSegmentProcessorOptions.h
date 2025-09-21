@class NSString;

@interface CLTripSegmentProcessorOptions : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL runLinearInterpolator;
@property (readonly, nonatomic) BOOL runInertialIntegrator;
@property (readonly, nonatomic) BOOL runMapIntegrator;
@property (readonly, nonatomic) BOOL useXPCServiceForMapQuery;
@property (readonly, nonatomic) BOOL shouldRecordDataInFileForReplay;
@property (readonly, nonatomic) BOOL createSparseDataFromOneHzData;
@property (readonly, nonatomic) BOOL isNetworkAccessAllowed;
@property (readonly, nonatomic) BOOL isSimulatedSparseProcessing;
@property (readonly, nonatomic) double timeBetweenReconstructedPointsSeconds;
@property (readonly, nonatomic) BOOL useParticleMapMatcherForSnappingInMapIntegrator;
@property (readonly, nonatomic) NSString *tripSegmentRecorderLoggingDirectory;
@property (readonly, nonatomic) BOOL useNonGNSSFixesForRouteReconstruction;
@property (readonly, nonatomic) double maxProcessingTimeInMilliSec;
@property (readonly, nonatomic) double useXPCServiceForVehicularAStarSearch;
@property (readonly, nonatomic) BOOL runLocationOutlierRejector;
@property (readonly, nonatomic) unsigned long long windowSizeForLocationOutlierRejector;
@property (readonly, nonatomic) unsigned long long stepSizeForLocationOutlierRejector;
@property (readonly, nonatomic) BOOL isWatch;
@property (readonly, nonatomic) BOOL enableUseWifiInPTS;
@property (readonly, nonatomic) double minDistanceBetweenODVisitsToGenerateTripSegmentMeters;
@property (readonly, nonatomic) double maxTripSegmentDurationSeconds;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (void)setNetworkAccessAllowed:(BOOL)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void)setIsWatch:(BOOL)a0;
- (void)setMaxProcessingTimeInMilliSec:(double)a0;
- (void)setCreateSparseDataFromOneHzData:(BOOL)a0;
- (void)setEnableUseWifiInPTS:(BOOL)a0;
- (void)setMaxTripSegmentDurationSeconds:(double)a0;
- (void)setMinDistanceBetweenODVisitsToGenerateTripSegmentMeters:(double)a0;
- (void)setRunInertialIntegrator:(BOOL)a0;
- (void)setRunLinearInterpolator:(BOOL)a0;
- (void)setRunLocationOutlierRejector:(BOOL)a0;
- (void)setRunMapIntegrator:(BOOL)a0;
- (void)setSimulatedSparseProcessing:(BOOL)a0;
- (void)setStepSizeForLocationOutlierRejector:(unsigned long long)a0;
- (void)setTimeBetweenReconstructedPointsSeconds:(double)a0;
- (void)setTripSegmentRecorderLoggingDirectory:(id)a0;
- (void)setUseNonGNSSFixesForRouteReconstruction:(BOOL)a0;
- (void)setUseParticleMapMatcherForSnappingInMapIntegrator:(BOOL)a0;
- (void)setUseXPCService:(BOOL)a0;
- (void)setUseXPCServiceForVehicularAStarSearch:(BOOL)a0;
- (void)setWindowSizeForLocationOutlierRejector:(unsigned long long)a0;
- (void)setshouldRecordDataInFileForReplay:(BOOL)a0;

@end
