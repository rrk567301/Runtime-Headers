@class NSArray;

@interface SEMDatabaseInsertBuilder : SEMDatabaseCommandBuilder {
    unsigned long long _numberOfColumns;
    NSArray *_columnNames;
    NSArray *_columnValues;
    NSArray *_returningColumns;
}

- (id)buildWithError:(id *)a0;
- (void).cxx_destruct;
- (void)setColumnValues:(id)a0;
- (id)initWithTableName:(id)a0 columnNames:(id)a1;
- (BOOL)_setError:(id *)a0 withCode:(long long)a1;
- (void)setReturningColumns:(id)a0;

@end
