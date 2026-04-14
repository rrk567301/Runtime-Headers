@class NSDictionary;

@interface NIDLTDOAConfiguration : NIConfiguration

@property (copy) NSDictionary *debugParameters;
@property (nonatomic, getter=isCameraAssistanceEnabled) BOOL cameraAssistanceEnabled;
@property (nonatomic) long long networkIdentifier;

+ (BOOL)supportsSecureCoding;

- (BOOL)_internalIsCameraAssistanceEnabled;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)descriptionInternal;
- (id)initWithConfigParametersOverride:(id)a0;
- (id)initWithNetworkIdentifier:(long long)a0;

@end
