@interface ML3Album : ML3Collection

+ (void)initialize;
+ (id)allProperties;
+ (id)databaseTable;
+ (id)joinClausesForProperty:(id)a0;
+ (id)defaultOrderingTerms;
+ (id)foreignPropertyForProperty:(id)a0 entityClass:(Class)a1;
+ (BOOL)propertyIsCountProperty:(id)a0;
+ (id)countingQueryForBaseQuery:(id)a0 countProperty:(id)a1 forIdentifier:(long long)a2;
+ (BOOL)libraryContentsChangeForProperty:(id)a0;
+ (BOOL)assistantLibraryContentsChangeForProperty:(id)a0;
+ (id)predisambiguatedProperties;
+ (long long)revisionTrackingCode;
+ (id)propertiesForGroupingKey;
+ (id)trackForeignPersistentID;
+ (id)propertiesForGroupingUniqueCollections;
+ (id)protocolItemWithProperties:(id)a0 inLibrary:(id)a1;
+ (id)_albumArtistProtocolItemWithTrackProperties:(id)a0 inLibrary:(id)a1;

- (id)multiverseIdentifier;
- (void)updateTrackValues:(id)a0;
- (id)protocolItem;

@end
