@class NSUUID, NSString, NSData, SFAuthorization;

@interface CWFRequestParameters : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSUUID *UUID;
@property (copy, nonatomic) NSData *authorizationExternalFormData;
@property (copy, nonatomic) NSString *interfaceName;
@property (nonatomic) int virtualInterfaceRole;
@property (nonatomic) unsigned long long timeout;
@property (nonatomic) long long qualityOfService;
@property (nonatomic) long long queuePriority;
@property (retain, nonatomic) SFAuthorization *authorization;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)authorizationData;
- (id)description;
- (BOOL)isEqualToRequestParameters:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
