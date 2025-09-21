@class NSArray, NSString, NSDictionary, NSMutableDictionary;

@interface ISDPropertyConflict : NSObject {
    NSArray *_propertyNames;
    NSString *_winningClientId;
    NSDictionary *_userValues;
    NSMutableDictionary *_propertyChangesPerClientId;
    NSString *_recordId;
    char _modified;
}

- (void)dealloc;
- (id)description;
- (id)descriptionWithLocale:(id)a0 indent:(unsigned long long)a1;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isResolved;
- (void)setUserValues:(id)a0;
- (char)isModified;
- (id)propertyNames;
- (id)initWithPropertyNames:(id)a0 recordId:(id)a1;
- (id)propertyChangeFromClientWithId:(id)a0;
- (char)propertyChangesAreDefaultValues;
- (id)winningClientId;
- (char)_propertyChanges:(id)a0 areEqualTo:(id)a1;
- (void)addPropertyChanges:(id)a0 fromClientId:(id)a1;
- (void)clearModified;
- (id)clientIds;
- (id)relationshipChangeReferencesRecordIdsInMap:(id)a0 updateTupleReferences:(char)a1;
- (void)setModified;
- (void)setWinningClientWithId:(id)a0;
- (id)winningPropertyChanges;
- (id)winningValueForProperty:(id)a0;

@end
