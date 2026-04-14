@class NSMutableSet;

@interface CoreDAVPrincipalSearchPropertySetItem : CoreDAVItem

@property (retain, nonatomic) NSMutableSet *principalSearchProperties;

+ (id)copyParseRules;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (void)addPrincipalSearchProperty:(id)a0;

@end
