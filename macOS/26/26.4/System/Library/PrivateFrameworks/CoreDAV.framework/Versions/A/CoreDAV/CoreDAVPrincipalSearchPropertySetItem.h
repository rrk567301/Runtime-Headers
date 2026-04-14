@class NSMutableSet;

@interface CoreDAVPrincipalSearchPropertySetItem : CoreDAVItem

@property (retain, nonatomic) NSMutableSet *principalSearchProperties;

+ (id)copyParseRules;

- (void).cxx_destruct;
- (id)init;
- (id)description;
- (void)addPrincipalSearchProperty:(id)a0;

@end
