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
+ (id)createSOSBeaconSearcherConfigWithSessionKey:(id)a0 selfData:(id)a1 peerData:(id)a2 usingCameraAssistance:(BOOL)a3;
+ (id)createSOSBeaconSubjectConfigWithSessionKey:(id)a0 selfData:(id)a1 peerData:(id)a2;

- (BOOL)_internalIsCameraAssistanceEnabled;
- (id)description;
- (BOOL)_internalIsCameraAssistanceInClientProcess;
- (id)init;
- (BOOL)_internalIsPowerAssertionRequired;
- (BOOL)_internalIsExtendedDistanceMeasurementEnabled;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithPeerToken:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)descriptionInternal;

@end
