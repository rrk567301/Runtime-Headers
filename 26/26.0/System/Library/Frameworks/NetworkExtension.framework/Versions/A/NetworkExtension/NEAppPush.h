@class NSDictionary, NSArray, NSString;

@interface NEAppPush : NSObject <NEConfigurationValidating, NEPrettyDescription, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (getter=isEnabled) BOOL enabled;
@property (copy) NSDictionary *providerConfiguration;
@property (copy) NSArray *matchSSIDs;
@property (copy) NSArray *matchPrivateLTENetworks;
@property BOOL matchEthernet;
@property (copy) NSString *pluginType;
@property (copy) NSString *providerBundleIdentifier;

- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (BOOL)checkValidityAndCollectErrors:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)overlapsWithConfiguration:(id)a0;

@end
