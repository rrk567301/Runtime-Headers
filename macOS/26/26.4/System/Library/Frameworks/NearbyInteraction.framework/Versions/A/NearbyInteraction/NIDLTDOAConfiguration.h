@class NSDictionary;

@interface NIDLTDOAConfiguration : NIConfiguration

@property (copy) NSDictionary *debugParameters;
@property (nonatomic, getter=isCameraAssistanceEnabled) BOOL cameraAssistanceEnabled;
@property (nonatomic) long long networkIdentifier;

+ (BOOL)supportsSecureCoding;

- (id)descriptionInternal;
- (BOOL)_internalIsCameraAssistanceEnabled;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithConfigParametersOverride:(id)a0;
- (id)initWithNetworkIdentifier:(long long)a0;

@end
