@class NIDiscoveryToken, NSDictionary;

@interface NINearbyPeerConfiguration : NIConfiguration

@property (copy, nonatomic) NIDiscoveryToken *peerDiscoveryToken;
@property (nonatomic, getter=isLongRangeEnabled) char longRangeEnabled;
@property (nonatomic) long long backgroundMode;
@property (copy) NSDictionary *debugParameters;
@property (nonatomic, getter=isCameraAssistanceEnabled) char cameraAssistanceEnabled;
@property (nonatomic, getter=isExtendedDistanceMeasurementEnabled) char extendedDistanceMeasurementEnabled;

+ (id)new;
+ (char)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)descriptionInternal;
- (char)_internalIsCameraAssistanceEnabled;
- (char)_internalIsExtendedDistanceMeasurementEnabled;
- (char)_internalIsPowerAssertionRequired;
- (id)initWithPeerToken:(id)a0;

@end
