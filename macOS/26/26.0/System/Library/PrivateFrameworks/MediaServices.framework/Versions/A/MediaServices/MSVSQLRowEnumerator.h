@class NSString, MSVSQLStatement;

@interface MSVSQLRowEnumerator : NSEnumerator <NSObject> {
    MSVSQLStatement *_statement;
}

@property (readonly, nonatomic) long long columnCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)doubleValueAtColumnIndex:(long long)a0;
- (id)jsonValueAtColumnIndex:(long long)a0 error:(id *)a1;
- (unsigned long long)uint64ValueAtColumnIndex:(long long)a0;
- (id)nextObject;
- (id)dataValueAtColumnIndex:(long long)a0;
- (BOOL)isNullValueAtColumnIndex:(long long)a0;
- (id)dateValueAtColumnIndex:(long long)a0;
- (id)markdownTableRow;
- (id)stringValueAtColumnIndex:(long long)a0;
- (id)markdownTable;
- (id)columnNameAtIndex:(long long)a0;
- (id)_markdownTable;
- (id)objectValueAtColumnIndex:(long long)a0;
- (void)_addRow:(id)a0 toTable:(id)a1;
- (BOOL)boolValueAtColumnIndex:(long long)a0;
- (long long)int64ValueAtColumnIndex:(long long)a0;
- (id)jsonDataAtColumnIndex:(long long)a0;
- (id)markdownTableHeader;
- (float)floatValueAtColumnIndex:(long long)a0;
- (id)nextObjectWithError:(id *)a0;
- (void).cxx_destruct;

@end
