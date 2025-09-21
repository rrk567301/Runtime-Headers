@class NSArray;

@interface NEPathController : NSObject <NEConfigurationValidating, NEPrettyDescription, NSSecureCoding, NSCopying> {
    NSArray *_payloadAppRules;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (getter=isEnabled) BOOL enabled;
@property BOOL ignoreRouteRules;
@property BOOL ignoreFallback;
@property long long cellularFallbackFlags;
@property (copy) NSArray *pathRules;
@property (readonly, nonatomic) BOOL hasNonDefaultRules;

+ (id)copyAggregatePathRules;

- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (BOOL)checkValidityAndCollectErrors:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyPathRuleBySigningIdentifier:(id)a0;
- (id)copyPathRuleSigningIdentifiers;
- (id)initWithCoder:(id)a0;
- (BOOL)removePathRuleBySigningIdentifier:(id)a0;
- (void).cxx_destruct;

@end
