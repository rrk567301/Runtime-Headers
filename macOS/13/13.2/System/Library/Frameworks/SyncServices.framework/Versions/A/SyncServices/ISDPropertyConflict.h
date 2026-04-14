@class NSArray, NSString, NSDictionary, NSMutableDictionary;

@interface ISDPropertyConflict : NSObject {
    NSArray *_propertyNames;
    NSString *_winningClientId;
    NSDictionary *_userValues;
    NSMutableDictionary *_propertyChangesPerClientId;
    NSString *_recordId;
    BOOL _modified;
}

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)descriptionWithLocale:(id)a0 indent:(unsigned long long)a1;
- (BOOL)isResolved;
- (void)setUserValues:(id)a0;
- (BOOL)isModified;
- (id)propertyNames;
- (void)clearModified;
- (id)clientIds;
- (id)winningClientId;
- (id)initWithPropertyNames:(id)a0 recordId:(id)a1;
- (BOOL)_propertyChanges:(id)a0 areEqualTo:(id)a1;
- (void)addPropertyChanges:(id)a0 fromClientId:(id)a1;
- (BOOL)propertyChangesAreDefaultValues;
- (void)setWinningClientWithId:(id)a0;
- (id)propertyChangeFromClientWithId:(id)a0;
- (void)setModified;
- (id)winningValueForProperty:(id)a0;
- (id)winningPropertyChanges;
- (id)relationshipChangeReferencesRecordIdsInMap:(id)a0 updateTupleReferences:(BOOL)a1;

@end
