@class NSString, NSArray;

@interface NEIPv4Settings : NSObject <NEConfigurationValidating, NEPrettyDescription, NEConfigurationLegacySupport, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property long long configMethod;
@property (copy) NSString *router;
@property BOOL overridePrimary;
@property (readonly) NSArray *addresses;
@property (readonly) NSArray *subnetMasks;
@property (copy) NSArray *includedRoutes;
@property (copy) NSArray *excludedRoutes;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)checkValidityAndCollectErrors:(id)a0;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (id)copyLegacyDictionary;
- (id)initFromLegacyDictionary:(id)a0;
- (id)initWithAddresses:(id)a0 subnetMasks:(id)a1;
- (BOOL)hasDefaultRoute;

@end
