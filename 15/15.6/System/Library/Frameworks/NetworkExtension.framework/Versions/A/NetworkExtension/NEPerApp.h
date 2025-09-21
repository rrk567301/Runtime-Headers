@class NSArray;

@interface NEPerApp : NSObject <NEConfigurationValidating, NEPrettyDescription, NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (copy) NSArray *appRules;
@property char noRestriction;
@property char restrictDomains;
@property (copy) NSArray *excludedDomains;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyAppRuleBySigningIdentifier:(id)a0;
- (char)checkValidityAndCollectErrors:(id)a0;
- (id)copyAppRuleByID:(id)a0;
- (id)copyAppRuleIDs;
- (id)copyCachedMachOUUIDs;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (char)removeAppRuleByID:(id)a0;
- (void)updateAppRulesForUID:(unsigned int)a0;

@end
