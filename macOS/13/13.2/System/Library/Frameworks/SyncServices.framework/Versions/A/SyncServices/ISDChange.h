@class NSString, NSMutableArray, NSDate;

@interface ISDChange : NSObject <NSCoding> {
    int _type;
    NSString *_recordId;
    NSString *_entityName;
    NSMutableArray *_propertyChanges;
    NSString *_clientId;
    unsigned int _fromGeneration;
    unsigned int _toGeneration;
    long long _changeSourceIndex;
    NSDate *_modificationDate;
    NSString *_identityHash;
}

+ (void)initialize;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (int)type;
- (id)entityName;
- (id)modificationDate;
- (id)clientId;
- (void)setModificationDate:(id)a0;
- (id)recordId;
- (void)setRecordId:(id)a0;
- (void)setPropertyType:(int)a0;
- (id)identityHash;
- (void)replaceRecordId:(id)a0 withRecordId:(id)a1;
- (void)replaceRelationshipTupleId:(id)a0 withRelationshipTupleId:(id)a1;
- (id)initWithChangeType:(int)a0 entityName:(id)a1 recordId:(id)a2 propertyChanges:(id)a3 clientId:(id)a4 fromGeneration:(unsigned int)a5 toGeneration:(unsigned int)a6 index:(long long)a7;
- (id)initWithChangeType:(int)a0 entityName:(id)a1 recordId:(id)a2 propertyChanges:(id)a3 clientId:(id)a4 fromGeneration:(unsigned int)a5 toGeneration:(unsigned int)a6;
- (id)initWithQuickDirtyCoder:(id)a0;
- (void)encodeWithQuickDirtyCoder:(id)a0;
- (int)isd_quickDirtyCoderType;
- (unsigned int)fromGeneration;
- (unsigned int)toGeneration;
- (id)propertyChanges;
- (long long)changeSourceIndex;
- (void)setPropertyChanges:(id)a0;
- (id)propertyChangeForName:(id)a0;
- (id)relationshipsWhichReferenceRecordWithId:(id)a0 entity:(id)a1;
- (void)enumeratePropertyChangesUsingBlock:(id /* block */)a0;
- (void)enumerateIdsAsArgumentToFunction:(void /* function */ *)a0 context:(void *)a1 skipTupleId:(BOOL)a2;
- (void)enumerateIdsAsArgumentToFunction:(void /* function */ *)a0 context:(void *)a1;
- (id)idsReferencedByChangeInDictionary:(id)a0;
- (int)cleanupTuplesWithId:(id)a0;
- (BOOL)mergeGlobalIdEquivalents:(id)a0;
- (void)noteModificationDate:(id)a0;
- (void)setIdentityHash:(id)a0;
- (id)fastRecordId;
- (id)fastClientId;

@end
