@class NSMutableDictionary;

@interface MTLibraryChanges : NSObject <NSCopying>

@property (retain, nonatomic) NSMutableDictionary *changesByEntityName;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (BOOL)hasChanges;
- (id)entityNames;
- (BOOL)hasDeletes;
- (BOOL)hasInserts;
- (BOOL)hasUpdates;
- (void)addChangeWith:(id)a0 entityName:(id)a1 changeType:(int)a2;
- (void)combineChanges:(id)a0;
- (id)changesForEntityName:(id)a0;
- (BOOL)hasChangesForEntityNames:(id)a0;
- (BOOL)hasInsertsForEntityNames:(id)a0;
- (BOOL)hasDeletesForEntityNames:(id)a0;
- (BOOL)hasUpdatesForEntityNames:(id)a0;
- (void)removeAllChanges;

@end
