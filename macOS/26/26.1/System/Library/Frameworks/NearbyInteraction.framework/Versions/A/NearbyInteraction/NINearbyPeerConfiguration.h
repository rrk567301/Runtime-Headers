@class NIDiscoveryToken, NSDictionary;

@interface NINearbyPeerConfiguration : NIConfiguration

@property (copy, nonatomic) NIDiscoveryToken *peerDiscoveryToken;
@property (nonatomic) long long useCase;
@property (nonatomic) BOOL useCaseCameraAssistanceInClientProcess;
@property (nonatomic, getter=isLongRangeEnabled) BOOL longRangeEnabled;
@property (nonatomic) long long backgroundMode;
@property (copy) NSDictionary *debugParameters;
@property (nonatomic, getter=isCameraAssistanceEnabled) BOOL cameraAssistanceEnabled;
@property (nonatomic, getter=isExtendedDistanceMeasurementEnabled) BOOL extendedDistanceMeasurementEnabled;

+ (id)createSOSBeaconSubjectConfigWithSessionKey:(id)a0 selfData:(id)a1 peerData:(id)a2;
+ (BOOL)supportsSecureCoding;
+ (id)createSOSBeaconSearcherConfigWithSessionKey:(id)a0 selfData:(id)a1 peerData:(id)a2 usingCameraAssistance:(BOOL)a3;
+ (id)new;

- (BOOL)_internalIsPowerAssertionRequired;
- (BOOL)_internalIsCameraAssistanceInClientProcess;
- (id)descriptionInternal;
- (unsigned long long)hash;
- (BOOL)_internalIsCameraAssistanceEnabled;
- (BOOL)_internalIsExtendedDistanceMeasurementEnabled;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithPeerToken:(id)a0;

@end
