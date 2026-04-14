@interface ML3Album : ML3Collection

+ (id)databaseTable;
+ (id)joinClausesForProperty:(id)a0;
+ (void)initialize;
+ (id)allProperties;
+ (BOOL)assistantLibraryContentsChangeForProperty:(id)a0;
+ (BOOL)collectionWithPersistentID:(long long)a0 addedToLibrary:(id)a1;
+ (id)countingQueryForBaseQuery:(id)a0 countProperty:(id)a1 forIdentifier:(long long)a2;
+ (id)defaultOrderingTerms;
+ (BOOL)deleteFromLibrary:(id)a0 deletionType:(int)a1 persistentIDs:(const long long *)a2 count:(unsigned long long)a3 usingConnection:(id)a4;
+ (id)foreignPropertyForProperty:(id)a0 entityClass:(Class)a1;
+ (BOOL)libraryContentsChangeForProperty:(id)a0;
+ (BOOL)libraryDynamicChangeForProperty:(id)a0;
+ (id)predisambiguatedProperties;
+ (id)propertiesForGroupingKey;
+ (id)propertiesForGroupingUniqueCollections;
+ (BOOL)propertyIsCountProperty:(id)a0;
+ (id)protocolItemWithProperties:(id)a0 inLibrary:(id)a1;
+ (long long)revisionTrackingCode;
+ (id)trackForeignPersistentID;

- (id)multiverseIdentifier;
- (id)protocolItem;
- (id)protocolItemForDynamicUpdate;
- (void)updateTrackValues:(id)a0;

@end
