@class NSMutableArray, CNCDSaveContext;

@interface CNCDGroupSaveExecutor : NSObject

@property (readonly, nonatomic) CNCDSaveContext *saveContext;
@property (readonly, nonatomic) NSMutableArray *addedGroupsToRefresh;

- (void).cxx_destruct;
- (id)initWithSaveContext:(id)a0;
- (id)allGroupIdentifiers;
- (void)saveGroups;
- (void)addGroups;
- (void)updateGroups;
- (void)deleteGroups;
- (void)refreshAddedGroups;
- (void)updateGroupSnapshots;
- (void)enumerateAddedGroups:(id /* block */)a0;
- (void)associateAddedGroup:(id)a0 withDatabaseRepresentation:(id)a1;

@end
