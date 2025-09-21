@class NSManagedObjectModel, NSKnownKeysDictionary, NSMutableArray;

@interface NSSQLModel : NSStoreMapping {
    NSManagedObjectModel *_mom;
    NSKnownKeysDictionary *_entitiesByName;
    NSMutableArray *_entities;
    id *_entityDescriptionToSQLMap;
    unsigned long long _brokenHashVersion;
    char _retainLeopardStyleDictionaries;
    char _modelHasPrecomputedKeyOrder;
    char _hasVirtualToOnes;
    unsigned int _entityIDOffset;
    unsigned int _lastEntityID;
}

- (void)dealloc;
- (id)initWithManagedObjectModel:(id)a0;
- (id)managedObjectModel;
- (id)initWithManagedObjectModel:(id)a0 configurationName:(id)a1 brokenHashVersion:(unsigned long long)a2;
- (char)_generateModelWithError:(id *)a0;
- (id)entityForID:(unsigned long long)a0;
- (id)entityNamed:(id)a0;
- (id)initWithManagedObjectModel:(id)a0 configurationName:(id)a1;
- (id)initWithManagedObjectModel:(id)a0 configurationName:(id)a1 retainHashHack:(char)a2;

@end
