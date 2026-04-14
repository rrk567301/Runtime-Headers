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

- (id)initWithCoder:(id)a0;
- (id)descriptionInternal;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_internalIsCameraAssistanceEnabled;
- (BOOL)_internalIsExtendedDistanceMeasurementEnabled;
- (void).cxx_destruct;
- (id)description;
- (BOOL)_internalIsCameraAssistanceInClientProcess;
- (BOOL)_internalIsPowerAssertionRequired;
- (id)initWithPeerToken:(id)a0;
- (id)init;

@end
