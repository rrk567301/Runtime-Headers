@class CKContainerIDTableEntry;

@interface CKSQLiteContainerIDTable : CKSQLiteUniquedObjectTable {
    CKContainerIDTableEntry *_cachedEntry;
}

+ (id)dbProperties;
+ (id)defaultLogicalTableName;
+ (Class)entryClass;
+ (BOOL)useNSCoding;

- (void)willAddToGroup:(id)a0;
- (void).cxx_destruct;
- (id)tableForReferenceProperty:(id)a0;
- (void)defaultSearchOrder:(id)a0;
- (id)entryForReferent:(id)a0;
- (id)fetchPrimaryKeyForEntry:(id)a0;
- (id)referenceWasDeleted:(id)a0;
- (id)referentForEntry:(id)a0 error:(id *)a1;

@end
