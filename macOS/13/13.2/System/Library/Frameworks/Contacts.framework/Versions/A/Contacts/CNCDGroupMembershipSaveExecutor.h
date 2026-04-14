@class CNCDSaveContext;

@interface CNCDGroupMembershipSaveExecutor : NSObject

@property (readonly, nonatomic) CNCDSaveContext *saveContext;

- (void).cxx_destruct;
- (id)initWithSaveContext:(id)a0;
- (id)allContactIdentifiers;
- (id)allGroupIdentifiers;
- (void)saveGroupMemberships;
- (void)addGroupMembers;
- (void)addSubgroups;
- (void)removeGroupMembers;
- (void)removeSubgroups;
- (void)enumerateCoreDataGroupsAndMembers:(id)a0 withBlock:(id /* block */)a1;
- (void)enumerateCoreDataGroupsAndSubgroups:(id)a0 withBlock:(id /* block */)a1;

@end
