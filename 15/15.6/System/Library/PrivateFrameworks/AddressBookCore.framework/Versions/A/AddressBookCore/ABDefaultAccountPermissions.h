@class NSString;

@interface ABDefaultAccountPermissions : NSObject <ABAccountPermissions>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultAccountPermissions;

- (char)canCreateGroups;
- (char)canDeletePeople;
- (char)canRenameGroup:(id)a0;
- (char)canCreatePeople;
- (char)canRemoveGroup:(id)a0;
- (char)canEditGroup:(id)a0;
- (char)canEditPerson:(id)a0;
- (char)groupsCanRemoveMembers;

@end
