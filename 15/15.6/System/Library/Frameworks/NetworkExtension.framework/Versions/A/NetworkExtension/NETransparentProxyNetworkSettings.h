@class NSArray;

@interface NETransparentProxyNetworkSettings : NETunnelNetworkSettings

@property char isFullyTransparent;
@property (copy) NSArray *includedNetworkRules;
@property (copy) NSArray *excludedNetworkRules;

+ (char)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)checkValidityAndCollectErrors:(id)a0;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;

@end
