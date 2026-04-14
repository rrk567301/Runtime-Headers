@class CKContainerIDTableEntry;

@interface CKSQLiteContainerIDTable : CKSQLiteUniquedObjectTable {
    CKContainerIDTableEntry *_cachedEntry;
}

+ (Class)entryClass;
+ (id)defaultLogicalTableName;
+ (id)dbProperties;
+ (BOOL)useNSCoding;

- (void).cxx_destruct;
- (id)tableForReferenceProperty:(id)a0;
- (void)willAddToGroup:(id)a0;
- (void)defaultSearchOrder:(id)a0;
- (id)entryForReferent:(id)a0;
- (id)fetchPrimaryKeyForEntry:(id)a0;
- (id)referenceWasDeleted:(id)a0;
- (id)referentForEntry:(id)a0 error:(id *)a1;

@end
