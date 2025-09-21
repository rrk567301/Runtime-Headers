@class NSString;

@interface CLTripSegmentProcessorOptions : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) char runLinearInterpolator;
@property (readonly, nonatomic) char runInertialIntegrator;
@property (readonly, nonatomic) char runMapIntegrator;
@property (readonly, nonatomic) char useXPCServiceForMapQuery;
@property (readonly, nonatomic) char shouldRecordDataInFileForReplay;
@property (readonly, nonatomic) char createSparseDataFromOneHzData;
@property (readonly, nonatomic) char isNetworkAccessAllowed;
@property (readonly, nonatomic) char isSimulatedSparseProcessing;
@property (readonly, nonatomic) double timeBetweenReconstructedPointsSeconds;
@property (readonly, nonatomic) char useParticleMapMatcherForSnappingInMapIntegrator;
@property (readonly, nonatomic) NSString *tripSegmentRecorderLoggingDirectory;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setCreateSparseDataFromOneHzData:(char)a0;
- (void)setNetworkAccessAllowed:(char)a0;
- (void)setRunInertialIntegrator:(char)a0;
- (void)setRunLinearInterpolator:(char)a0;
- (void)setRunMapIntegrator:(char)a0;
- (void)setSimulatedSparseProcessing:(char)a0;
- (void)setTimeBetweenReconstructedPointsSeconds:(double)a0;
- (void)setTripSegmentRecorderLoggingDirectory:(id)a0;
- (void)setUseParticleMapMatcherForSnappingInMapIntegrator:(char)a0;
- (void)setUseXPCService:(char)a0;
- (void)setshouldRecordDataInFileForReplay:(char)a0;

@end
