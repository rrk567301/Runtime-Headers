@class NSString, NSMutableDictionary;

@interface MTLibraryChanges : NSObject <NSCopying>

@property (retain, nonatomic) NSMutableDictionary *changesByEntityName;
@property (readonly, nonatomic) NSString *contextName;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (char)hasChanges;
- (id)entityNames;
- (char)hasDeletes;
- (char)hasInserts;
- (char)hasUpdates;
- (void)combineChanges:(id)a0;
- (void)addChangeWith:(id)a0 entityName:(id)a1 changeType:(int)a2;
- (id)changesForEntityName:(id)a0;
- (char)hasChangesForEntityNames:(id)a0;
- (char)hasDeletesForEntityNames:(id)a0;
- (char)hasInsertsForEntityNames:(id)a0;
- (char)hasUpdatesForEntityNames:(id)a0;
- (id)initWithContextName:(id)a0;
- (void)removeAllChanges;

@end
