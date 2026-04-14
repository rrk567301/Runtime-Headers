@class NSDictionary;

@interface NIDLTDOAConfiguration : NIConfiguration

@property (copy) NSDictionary *debugParameters;
@property (nonatomic, getter=isCameraAssistanceEnabled) BOOL cameraAssistanceEnabled;
@property (nonatomic) long long networkIdentifier;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)_internalIsCameraAssistanceEnabled;
- (id)description;
- (id)descriptionInternal;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithConfigParametersOverride:(id)a0;
- (id)initWithNetworkIdentifier:(long long)a0;

@end
