@class CNCDSaveContext;

@interface CNCDGroupSaveExecutor : NSObject

@property (readonly, nonatomic) CNCDSaveContext *saveContext;

- (void).cxx_destruct;
- (id)initWithSaveContext:(id)a0;
- (id)allGroupIdentifiers;
- (void)saveGroups;
- (void)updateGroupSnapshots;
- (void)addGroups;
- (void)updateGroups;
- (void)deleteGroups;
- (void)enumerateAddedGroups:(id /* block */)a0;

@end
