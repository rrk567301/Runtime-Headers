@class NSString, NSMutableDictionary;

@interface MTLibraryChanges : NSObject <NSCopying>

@property (retain, nonatomic) NSMutableDictionary *changesByEntityName;
@property (readonly, nonatomic) NSString *contextName;

- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)hasChanges;
- (id)entityNames;
- (BOOL)hasDeletes;
- (BOOL)hasInserts;
- (BOOL)hasUpdates;
- (void)combineChanges:(id)a0;
- (id)initWithContextName:(id)a0;
- (id)changesForEntityName:(id)a0;
- (void)removeAllChanges;
- (void)addChangeWith:(id)a0 entityName:(id)a1 changeType:(int)a2;
- (BOOL)hasChangesForEntityNames:(id)a0;
- (BOOL)hasInsertsForEntityNames:(id)a0;
- (BOOL)hasDeletesForEntityNames:(id)a0;
- (BOOL)hasUpdatesForEntityNames:(id)a0;

@end
