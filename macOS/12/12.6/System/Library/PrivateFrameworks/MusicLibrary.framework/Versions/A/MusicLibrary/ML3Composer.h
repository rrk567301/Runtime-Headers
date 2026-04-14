@interface ML3Composer : ML3Collection

+ (void)initialize;
+ (id)allProperties;
+ (id)databaseTable;
+ (long long)revisionTrackingCode;
+ (id)joinClausesForProperty:(id)a0;
+ (BOOL)propertyIsCountProperty:(id)a0;
+ (id)countingQueryForBaseQuery:(id)a0 countProperty:(id)a1 forIdentifier:(long long)a2;
+ (id)predisambiguatedProperties;
+ (id)defaultOrderingTerms;
+ (id)foreignPropertyForProperty:(id)a0 entityClass:(Class)a1;
+ (id)propertiesForGroupingKey;
+ (id)trackForeignPersistentID;
+ (id)protocolItemWithProperties:(id)a0 inLibrary:(id)a1;

- (id)multiverseIdentifier;
- (void)updateTrackValues:(id)a0;
- (id)protocolItem;

@end
