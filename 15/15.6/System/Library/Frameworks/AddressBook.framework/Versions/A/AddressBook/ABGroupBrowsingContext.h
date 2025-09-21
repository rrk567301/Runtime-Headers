@class ABGroup, ABAccount, NSString;

@interface ABGroupBrowsingContext : NSObject

@property (readonly, retain) ABAccount *account;
@property (readonly, retain) ABGroup *group;
@property (readonly, copy) NSString *groupLabel;
@property (readonly) char canCreateGroups;

- (void).cxx_destruct;
- (id)initWithAccount:(id)a0 group:(id)a1 groupLabel:(id)a2 canCreateGroups:(char)a3;

@end
