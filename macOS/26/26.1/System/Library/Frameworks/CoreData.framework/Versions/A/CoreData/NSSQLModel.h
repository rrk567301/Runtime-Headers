@class NSManagedObjectModel, NSKnownKeysDictionary, NSArray;

@interface NSSQLModel : NSStoreMapping {
    NSManagedObjectModel *_mom;
    NSKnownKeysDictionary *_entitiesByName;
    NSArray *_entities;
    id *_entityDescriptionToSQLMap;
    unsigned long long _brokenHashVersion;
    BOOL _retainLeopardStyleDictionaries;
    BOOL _modelHasPrecomputedKeyOrder;
    BOOL _hasVirtualToOnes;
    unsigned int _entityIDOffset;
    unsigned int _lastEntityID;
}

- (id)initWithManagedObjectModel:(id)a0 configurationName:(id)a1 brokenHashVersion:(unsigned long long)a2;
- (id)initWithManagedObjectModel:(id)a0 configurationName:(id)a1 retainHashHack:(BOOL)a2;
- (id)initWithManagedObjectModel:(id)a0;
- (BOOL)_generateModelWithError:(id *)a0;
- (void)dealloc;
- (id)initWithManagedObjectModel:(id)a0 configurationName:(id)a1;
- (id)entityNamed:(id)a0;
- (id)managedObjectModel;
- (id)entityForID:(unsigned long long)a0;

@end
