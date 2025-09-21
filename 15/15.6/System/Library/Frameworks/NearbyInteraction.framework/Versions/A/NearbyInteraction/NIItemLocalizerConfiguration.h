@class NSUUID, NIDiscoveryToken, NSDictionary;

@interface NIItemLocalizerConfiguration : NIConfiguration

@property (copy, nonatomic) NSUUID *itemUUID;
@property (copy, nonatomic) NIDiscoveryToken *discoveryToken;
@property (copy, nonatomic) NSDictionary *debugParameters;
@property (nonatomic) long long preferredUpdateRate;
@property (nonatomic, getter=isCameraAssistanceEnabled) char cameraAssistanceEnabled;

+ (char)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)descriptionInternal;
- (char)_internalIsCameraAssistanceEnabled;
- (char)canUpdateToConfiguration:(id)a0;
- (id)initWithItemUUID:(id)a0 preferredUpdateRate:(long long)a1;

@end
