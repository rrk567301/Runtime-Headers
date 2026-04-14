@interface CKSQLiteKeyValueStore : CKSQLiteDatabaseTable

+ (id)dbProperties;
+ (Class)entryClass;

- (id)finishInitializing:(BOOL)a0;
- (void)purgeOrphanedTableGroupKeys;
- (void)purgeOrphanedTableKeys;
- (void)purgeOrphanedKeys;
- (id)numberValueForKey:(id)a0 scope:(unsigned long long)a1 scopeIdentifier:(id)a2;
- (void)setNumberValue:(id)a0 forKey:(id)a1 scope:(unsigned long long)a2 scopeIdentifier:(id)a3;
- (id)stringValueForKey:(id)a0 scope:(unsigned long long)a1 scopeIdentifier:(id)a2;
- (void)setStringValue:(id)a0 forKey:(id)a1 scope:(unsigned long long)a2 scopeIdentifier:(id)a3;
- (id)dataValueForKey:(id)a0 scope:(unsigned long long)a1 scopeIdentifier:(id)a2;
- (void)setDataValue:(id)a0 forKey:(id)a1 scope:(unsigned long long)a2 scopeIdentifier:(id)a3;
- (id)dateValueForKey:(id)a0 scope:(unsigned long long)a1 scopeIdentifier:(id)a2;
- (void)setDateValue:(id)a0 forKey:(id)a1 scope:(unsigned long long)a2 scopeIdentifier:(id)a3;
- (id)UUIDValueForKey:(id)a0 scope:(unsigned long long)a1 scopeIdentifier:(id)a2;
- (void)setUUIDValue:(id)a0 forKey:(id)a1 scope:(unsigned long long)a2 scopeIdentifier:(id)a3;
- (id)objectValueForKey:(id)a0 scope:(unsigned long long)a1 scopeIdentifier:(id)a2;
- (void)setObjectValue:(id)a0 forKey:(id)a1 scope:(unsigned long long)a2 scopeIdentifier:(id)a3;

@end
