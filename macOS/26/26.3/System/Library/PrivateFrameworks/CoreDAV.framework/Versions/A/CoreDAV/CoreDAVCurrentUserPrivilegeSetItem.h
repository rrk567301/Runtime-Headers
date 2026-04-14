@class NSMutableSet;

@interface CoreDAVCurrentUserPrivilegeSetItem : CoreDAVItem

@property (retain, nonatomic) NSMutableSet *privileges;

+ (id)copyParseRules;

- (BOOL)hasPrivilegeWithNameSpace:(id)a0 andName:(id)a1;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)addPrivilege:(id)a0;

@end
