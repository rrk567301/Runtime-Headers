@class CKSQLiteTOCTableEntry;

@interface CKSQLiteGenericTable : CKSQLiteTable {
    CKSQLiteTOCTableEntry *_tocEntry;
}

+ (Class)entryClass;
+ (id)objectClassesForProperty:(id)a0;
+ (void)enumeratePropertyDataWithBlock:(id /* block */)a0;
+ (Class)genericTableClassForTOCTableEntry:(id)a0;
+ (id)genericTableForTOCEntry:(id)a0;
+ (unsigned int)propertyInfo:(id)a0;
+ (void)setValue:(id)a0 forProperty:(id)a1 propertyInfo:(unsigned int)a2 inObject:(id)a3;
+ (Class)tocClass;
+ (id)uniqueSubclassClassNameForClassName:(id)a0;
+ (BOOL)useNSCoding;
+ (id)valueForProperty:(id)a0 propertyInfo:(unsigned int)a1 inObject:(id)a2;

- (void).cxx_destruct;
- (BOOL)_useTemporaryTables;
- (id)initWithTOCEntry:(id)a0;
- (void)setValue:(id)a0 forProperty:(id)a1 propertyInfo:(unsigned int)a2 inObject:(id)a3;
- (id)valueForProperty:(id)a0 propertyInfo:(unsigned int)a1 inObject:(id)a2;

@end
