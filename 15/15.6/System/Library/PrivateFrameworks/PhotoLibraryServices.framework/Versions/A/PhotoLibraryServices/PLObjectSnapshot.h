@class NSKnownKeysDictionary, PLManagedObject;

@interface PLObjectSnapshot : NSObject {
    NSKnownKeysDictionary *_snapshotValues;
    struct __CFDictionary { } *_indexMaps;
}

@property (readonly, nonatomic) PLManagedObject *managedObject;

+ (struct __CFDictionary { } *)_createIndexMapsSnapshotForManagedObject:(id)a0 changeNotificationCenter:(id)a1;
+ (id)snapshotForManagedObject:(id)a0 changeNotificationCenter:(id)a1 useCommitedValues:(char)a2;

- (void)dealloc;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)_allSnapshotValuesDescription;
- (id)_snapshotValueForProperty:(id)a0;
- (id)filteredIndexesForFilter:(id)a0;
- (char)hasSnapshotValueForProperty:(id)a0;
- (id)indexMapStateForDerivedObject:(id)a0;
- (id)initWithManagedObject:(id)a0 properties:(id)a1 toOneRelationships:(id)a2 indexMaps:(struct __CFDictionary { } *)a3 useCommitedValues:(char)a4;
- (void)setAssetsSnapshot:(id)a0;
- (id)snapshotValueForProperty:(id)a0;

@end
