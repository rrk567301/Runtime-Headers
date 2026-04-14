@class CNCDSaveContext;

@interface CNCDGroupMembershipSaveExecutor : NSObject

@property (readonly, nonatomic) CNCDSaveContext *saveContext;

- (void).cxx_destruct;
- (id)allContactIdentifiers;
- (id)initWithSaveContext:(id)a0;
- (void)addGroupMembers;
- (void)removeGroupMembers;
- (void)enumerateCoreDataGroupsAndMembers:(id)a0 withBlock:(id /* block */)a1;
- (id)allGroupIdentifiers;
- (void)saveGroupMemberships;

@end
