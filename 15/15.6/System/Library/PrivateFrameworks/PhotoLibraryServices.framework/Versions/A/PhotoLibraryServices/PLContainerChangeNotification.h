@class NSString, NSArray, PLObjectSnapshot, PLManagedObject, NSIndexSet;

@interface PLContainerChangeNotification : PLChangeNotification {
    id _object;
    PLObjectSnapshot *_snapshot;
    NSArray *_changedObjects;
    char _didCalculateDiffs;
    char _shouldReload;
    NSIndexSet *_deletedIndexes;
    NSIndexSet *_insertedIndexes;
    NSIndexSet *_changedIndexes;
    char _countDidChange;
}

@property (nonatomic, setter=_setDidCalculateDiffs:) char _didCalculateDiffs;
@property (readonly, retain, nonatomic) PLManagedObject *_managedObject;
@property (readonly, retain, nonatomic) NSString *_contentRelationshipName;
@property (readonly, retain, nonatomic) NSArray *_changedObjects;
@property (readonly, retain, nonatomic) PLObjectSnapshot *snapshot;
@property (readonly, retain, nonatomic) NSString *_diffDescription;
@property (readonly, nonatomic) char countDidChange;
@property (readonly, nonatomic) NSIndexSet *movedIndexes;
@property (readonly, retain, nonatomic) struct __CFArray { } *movedFromIndexes;
@property (readonly, nonatomic) char shouldReload;
@property (readonly, nonatomic) NSIndexSet *deletedIndexes;
@property (readonly, nonatomic) NSIndexSet *insertedIndexes;
@property (readonly, nonatomic) char hasMoves;
@property (readonly, nonatomic) NSIndexSet *changedIndexes;
@property (readonly, nonatomic) NSIndexSet *changedIndexesRelativeToSnapshot;
@property (readonly, nonatomic) NSArray *deletedObjects;
@property (readonly, nonatomic) NSArray *insertedObjects;
@property (readonly, nonatomic) NSArray *changedObjects;

- (void)dealloc;
- (id)init;
- (id)name;
- (void).cxx_destruct;
- (id)object;
- (id)_init;
- (void)_calculateDiffs;
- (void)enumerateMovesWithBlock:(id /* block */)a0;
- (unsigned long long)snapshotIndexForContainedObject:(id)a0;
- (void)_calculateDiffsIfNecessary;
- (char)_getOldSet:(id *)a0 newSet:(id *)a1;
- (id)_initWithObject:(id)a0 snapshot:(id)a1 changedObjects:(id)a2;

@end
