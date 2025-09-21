@class NSString, NSMutableDictionary;

@interface SEMSQLiteDatabase : NSObject <SEMDatabase> {
    struct sqlite3 { } *_handle;
    NSMutableDictionary *_cachedSQLiteStatements;
}

@property (readonly, nonatomic) NSString *path;
@property (readonly, nonatomic) long long accessPermission;
@property (readonly, nonatomic) long long threadingMode;
@property (readonly, nonatomic) int dataProtectionClass;
@property (readonly, nonatomic) long long databaseOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (char)openWithError:(id *)a0;
- (char)closeWithError:(id *)a0;
- (char)beginTransactionWithError:(id *)a0;
- (char)commitTransactionWithError:(id *)a0;
- (char)rollbackTransactionWithError:(id *)a0;
- (char)cleanup:(id *)a0;
- (id)executeCommand:(id)a0 options:(unsigned long long)a1;
- (char)executeCommand:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (char)executeCommandString:(id)a0 error:(id *)a1;
- (id)initWithPath:(id)a0 accessPermission:(long long)a1 threadingMode:(long long)a2 dataProtectionClass:(int)a3 databaseOptions:(long long)a4;
- (int)rowsModified:(id *)a0;

@end
