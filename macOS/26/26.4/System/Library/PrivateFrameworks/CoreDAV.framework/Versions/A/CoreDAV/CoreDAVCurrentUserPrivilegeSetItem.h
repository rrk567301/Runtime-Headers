@class NSMutableSet;

@interface CoreDAVCurrentUserPrivilegeSetItem : CoreDAVItem

@property (retain, nonatomic) NSMutableSet *privileges;

+ (id)copyParseRules;

- (BOOL)hasPrivilegeWithNameSpace:(id)a0 andName:(id)a1;
- (void)addPrivilege:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)description;

@end
