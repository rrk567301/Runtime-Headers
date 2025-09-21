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

+ (BOOL)supportsSecureCoding;
+ (id)new;
+ (id)createSOSBeaconSearcherConfigWithSessionKey:(id)a0 selfData:(id)a1 peerData:(id)a2 usingCameraAssistance:(BOOL)a3;
+ (id)createSOSBeaconSubjectConfigWithSessionKey:(id)a0 selfData:(id)a1 peerData:(id)a2;

- (BOOL)_internalIsExtendedDistanceMeasurementEnabled;
- (BOOL)_internalIsCameraAssistanceInClientProcess;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (BOOL)_internalIsCameraAssistanceEnabled;
- (id)description;
- (id)descriptionInternal;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)initWithPeerToken:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)_internalIsPowerAssertionRequired;

@end
