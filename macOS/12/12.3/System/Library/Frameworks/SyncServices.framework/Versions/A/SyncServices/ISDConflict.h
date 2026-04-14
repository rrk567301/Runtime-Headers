@class NSString, NSArray, NSMutableDictionary, NSMutableArray;

@interface ISDConflict : NSObject {
    NSString *_recordId;
    NSString *_entityName;
    NSString *_dataClassName;
    NSArray *_identityKeys;
    NSMutableArray *_propertyConflicts;
    NSArray *_propertyDependencies;
    NSMutableDictionary *_deletedRecordMap;
}

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)descriptionWithLocale:(id)a0 indent:(long long)a1;
- (id)entityName;
- (BOOL)isModified;
- (id)recordId;
- (id)propertyNames;
- (void)addDeletedRecord:(id)a0;
- (id)identityKeys;
- (id)propertyConflictForPropertyNames:(id)a0;
- (void)_addPropertyChanges:(id)a0 forDependentPropertyNames:(id)a1 fromClientId:(id)a2;
- (void)clearModified;
- (id)initWithRecordId:(id)a0 entityName:(id)a1 dataClassName:(id)a2 identityKeys:(id)a3;
- (void)addDependentPropertyValues:(id)a0 forDependentPropertyNames:(id)a1;
- (void)addPropertyChanges:(id)a0 forDependentPropertyNames:(id)a1;
- (id)dataClassName;
- (void)purgeResolvedConflicts;
- (id)propertyConflicts;
- (id)clientIds;
- (id)propertyConflictForPropertyName:(id)a0;
- (id)winningClientId;
- (BOOL)containsConflictOnPropertyNames:(id)a0;
- (id)conflictWithPropertyNames:(id)a0 areDefaultValues:(BOOL *)a1;
- (id)unresolvedPropertyConflicts;
- (id)resolvedPropertyConflicts;
- (void)setWinningClientId:(id)a0;
- (id)deletedRecordMap;
- (BOOL)removePropertyConflict:(id)a0;

@end
