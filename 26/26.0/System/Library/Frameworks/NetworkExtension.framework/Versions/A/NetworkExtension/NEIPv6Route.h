@class NSString, NSNumber;

@interface NEIPv6Route : NSObject <NEConfigurationValidating, NEPrettyDescription, NEConfigurationLegacySupport, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *destinationAddress;
@property (readonly) NSNumber *destinationNetworkPrefixLength;
@property (copy) NSString *gatewayAddress;

+ (id)defaultRoute;

- (id)copyLegacyDictionary;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (id)initFromLegacyDictionary:(id)a0;
- (BOOL)checkValidityAndCollectErrors:(id)a0;
- (BOOL)isDefaultRoute;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithDestinationAddress:(id)a0 networkPrefixLength:(id)a1;

@end
