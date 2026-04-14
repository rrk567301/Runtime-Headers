@class NSArray;

@interface VSIdentityProviderAppsResponse : NSObject

@property (copy, nonatomic) NSArray *providerAppAdamIDs;
@property (copy, nonatomic) NSArray *channelMappings;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
