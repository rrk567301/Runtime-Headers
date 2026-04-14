@class NSArray;

@interface NETransparentProxyNetworkSettings : NETunnelNetworkSettings

@property BOOL isFullyTransparent;
@property (copy) NSArray *includedNetworkRules;
@property (copy) NSArray *excludedNetworkRules;

+ (BOOL)supportsSecureCoding;

- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (BOOL)checkValidityAndCollectErrors:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
