@class NSDictionary;

@interface NIDLTDOAConfiguration : NIConfiguration

@property (copy) NSDictionary *debugParameters;
@property (nonatomic, getter=isCameraAssistanceEnabled) BOOL cameraAssistanceEnabled;
@property (nonatomic) long long networkIdentifier;

+ (BOOL)supportsSecureCoding;

- (id)descriptionInternal;
- (unsigned long long)hash;
- (BOOL)_internalIsCameraAssistanceEnabled;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithConfigParametersOverride:(id)a0;
- (id)initWithNetworkIdentifier:(long long)a0;

@end
