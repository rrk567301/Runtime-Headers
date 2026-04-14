@class NSArray, NSDictionary, WBSSQLiteDatabase;

@interface WBSSQLiteStatement : NSObject {
    NSDictionary *_columnNamesToIndexes;
    NSArray *_columnNames;
}

@property (readonly, nonatomic) NSArray *columnNames;
@property (readonly, nonatomic) NSDictionary *columnNamesToIndexes;
@property (readonly, nonatomic) struct sqlite3_stmt { } *handle;
@property (readonly, nonatomic) WBSSQLiteDatabase *database;

- (void)invalidate;
- (BOOL)_isValid;
- (BOOL)execute:(id *)a0;
- (id)initWithDatabase:(id)a0 query:(id)a1 error:(id *)a2;
- (BOOL)fetchWithEnumerationBlock:(id /* block */)a0 error:(id *)a1;
- (id)init;
- (void)bindString:(id)a0 atParameterIndex:(unsigned long long)a1;
- (void)bindInt:(int)a0 atParameterIndex:(unsigned long long)a1;
- (void)bindInt64:(long long)a0 atParameterIndex:(unsigned long long)a1;
- (id)fetch;
- (void).cxx_destruct;
- (void)bindNullAtParameterIndex:(unsigned long long)a0;
- (void)bindData:(id)a0 atParameterIndex:(unsigned long long)a1;
- (void)dealloc;
- (void)reset;
- (void)bindDouble:(double)a0 atParameterIndex:(unsigned long long)a1;
- (int)execute;
- (id)initWithDatabase:(id)a0 query:(id)a1;

@end
