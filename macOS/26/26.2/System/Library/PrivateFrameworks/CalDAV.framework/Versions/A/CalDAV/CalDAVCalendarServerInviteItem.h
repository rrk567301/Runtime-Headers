@class NSMutableSet;

@interface CalDAVCalendarServerInviteItem : CoreDAVItem

@property (retain, nonatomic) NSMutableSet *users;

- (void).cxx_destruct;
- (id)init;
- (id)copyParseRules;
- (void)addUser:(id)a0;
- (id)initWithNameSpace:(id)a0 andName:(id)a1;

@end
