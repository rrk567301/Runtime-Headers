@class NSArray;

@interface NEPerApp : NSObject <NEConfigurationValidating, NEPrettyDescription, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSArray *appRules;
@property BOOL noRestriction;
@property BOOL restrictDomains;
@property (copy) NSArray *excludedDomains;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)checkValidityAndCollectErrors:(id)a0;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (id)copyAppRuleByID:(id)a0;
- (id)copyAppRuleBySigningIdentifier:(id)a0;
- (BOOL)removeAppRuleByID:(id)a0;
- (id)copyAppRuleIDs;
- (void)updateAppRulesForUID:(unsigned int)a0;
- (id)copyCachedMachOUUIDs;

@end
