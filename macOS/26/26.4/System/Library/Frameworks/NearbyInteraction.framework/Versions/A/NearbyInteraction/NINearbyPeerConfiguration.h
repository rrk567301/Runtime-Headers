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

+ (id)new;
+ (BOOL)supportsSecureCoding;
+ (id)createSOSBeaconSubjectConfigWithSessionKey:(id)a0 selfData:(id)a1 peerData:(id)a2;
+ (id)createSOSBeaconSearcherConfigWithSessionKey:(id)a0 selfData:(id)a1 peerData:(id)a2 usingCameraAssistance:(BOOL)a3;

- (BOOL)_internalIsPowerAssertionRequired;
- (id)descriptionInternal;
- (BOOL)_internalIsCameraAssistanceInClientProcess;
- (BOOL)_internalIsCameraAssistanceEnabled;
- (BOOL)_internalIsExtendedDistanceMeasurementEnabled;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithPeerToken:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
