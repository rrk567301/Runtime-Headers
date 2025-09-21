@class NSMutableArray, CNCDSaveContext;

@interface CNCDGroupSaveExecutor : NSObject

@property (readonly, nonatomic) CNCDSaveContext *saveContext;
@property (readonly, nonatomic) NSMutableArray *addedGroupsToRefresh;

- (id)allGroupIdentifiers;
- (void).cxx_destruct;
- (void)addGroups;
- (void)associateAddedGroup:(id)a0 withDatabaseRepresentation:(id)a1;
- (void)deleteGroups;
- (void)enumerateAddedGroups:(id /* block */)a0;
- (id)initWithSaveContext:(id)a0;
- (void)refreshAddedGroups;
- (void)saveGroups;
- (void)updateGroupSnapshots;
- (void)updateGroups;

@end
