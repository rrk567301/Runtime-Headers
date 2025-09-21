@class NSUUID, NIDiscoveryToken, NSDictionary;

@interface NIItemLocalizerConfiguration : NIConfiguration

@property (copy, nonatomic) NSUUID *itemUUID;
@property (copy, nonatomic) NIDiscoveryToken *discoveryToken;
@property (copy, nonatomic) NSDictionary *debugParameters;
@property (nonatomic) long long preferredUpdateRate;
@property (nonatomic, getter=isCameraAssistanceEnabled) BOOL cameraAssistanceEnabled;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)_internalIsCameraAssistanceEnabled;
- (id)description;
- (id)descriptionInternal;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (BOOL)canUpdateToConfiguration:(id)a0;
- (void).cxx_destruct;
- (id)initWithItemUUID:(id)a0 preferredUpdateRate:(long long)a1;

@end
