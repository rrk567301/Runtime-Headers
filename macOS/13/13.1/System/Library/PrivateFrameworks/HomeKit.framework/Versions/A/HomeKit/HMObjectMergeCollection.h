@class NSArray, NSMutableArray, NSMapTable;

@interface HMObjectMergeCollection : NSObject

@property (retain, nonatomic) NSMutableArray *currentExistingObjects;
@property (retain, nonatomic) NSMutableArray *currentAddedObjects;
@property (retain, nonatomic) NSMutableArray *currentRemovedObjects;
@property (retain, nonatomic) NSMutableArray *currentModifiedObjects;
@property (retain, nonatomic) NSMapTable *commonObjectsMaps;
@property (readonly, nonatomic) NSArray *addedObjects;
@property (readonly, nonatomic) NSArray *removedObjects;
@property (readonly, nonatomic) NSArray *modifiedObjects;
@property (readonly, nonatomic) NSArray *existingObjects;
@property (readonly, nonatomic, getter=isModified) BOOL modified;
@property (readonly, nonatomic) unsigned long long modifiedCount;

- (id)init;
- (void).cxx_destruct;
- (id)initWithExistingObjects:(id)a0 newObjects:(id)a1;
- (void)_replaceAddedObjectsWithObjectsFromArray:(id)a0;
- (void)_enumerateObjectAdditionWithBlock:(id /* block */)a0;
- (void)_enumerateObjectRemoveWithBlock:(id /* block */)a0;
- (void)_mergeCommonObjects;
- (void)mergeCommonObjectsNoMergeCount;
- (id)finalMergeCollection;

@end
