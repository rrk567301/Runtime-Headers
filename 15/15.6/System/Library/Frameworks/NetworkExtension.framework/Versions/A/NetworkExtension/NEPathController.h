@class NSArray;

@interface NEPathController : NSObject <NEConfigurationValidating, NEPrettyDescription, NSSecureCoding, NSCopying> {
    NSArray *_payloadAppRules;
}

@property (class, readonly) char supportsSecureCoding;

@property (getter=isEnabled) char enabled;
@property char ignoreRouteRules;
@property char ignoreFallback;
@property long long cellularFallbackFlags;
@property (copy) NSArray *pathRules;
@property (readonly, nonatomic) char hasNonDefaultRules;

+ (id)copyAggregatePathRules;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)checkValidityAndCollectErrors:(id)a0;
- (id)copyPathRuleBySigningIdentifier:(id)a0;
- (id)copyPathRuleSigningIdentifiers;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (char)removePathRuleBySigningIdentifier:(id)a0;

@end
