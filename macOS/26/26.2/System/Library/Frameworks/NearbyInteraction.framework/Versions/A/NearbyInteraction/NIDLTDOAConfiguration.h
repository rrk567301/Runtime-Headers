@class NSDictionary;

@interface NIDLTDOAConfiguration : NIConfiguration

@property (copy) NSDictionary *debugParameters;
@property (nonatomic, getter=isCameraAssistanceEnabled) BOOL cameraAssistanceEnabled;
@property (nonatomic) long long networkIdentifier;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)descriptionInternal;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_internalIsCameraAssistanceEnabled;
- (void).cxx_destruct;
- (id)description;
- (id)initWithConfigParametersOverride:(id)a0;
- (id)initWithNetworkIdentifier:(long long)a0;

@end
