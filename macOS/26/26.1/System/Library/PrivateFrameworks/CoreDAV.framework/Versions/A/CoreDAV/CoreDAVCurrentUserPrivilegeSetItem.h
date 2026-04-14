@class NSMutableSet;

@interface CoreDAVCurrentUserPrivilegeSetItem : CoreDAVItem

@property (retain, nonatomic) NSMutableSet *privileges;

+ (id)copyParseRules;

- (void)addPrivilege:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)hasPrivilegeWithNameSpace:(id)a0 andName:(id)a1;
- (id)init;

@end
