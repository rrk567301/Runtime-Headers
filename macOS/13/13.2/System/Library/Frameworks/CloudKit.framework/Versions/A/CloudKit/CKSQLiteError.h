@interface CKSQLiteError : CKInternalError

@property (readonly, nonatomic) int sqliteCode;
@property (readonly, nonatomic) int sqliteExtendedCode;
@property (readonly, nonatomic) BOOL databaseIsCorrupt;

+ (BOOL)isNoMatchingRowError:(id)a0;
+ (BOOL)isNoUniqueRowError:(id)a0;
+ (BOOL)isConstraintError:(id)a0;
+ (BOOL)isUniqueConstraintError:(id)a0;
+ (id)testErrorWithDatabaseCorruption;
+ (id)errorForSQLite:(struct sqlite3 { } *)a0 message:(id)a1 args:(char *)a2;
+ (id)errorForSQLite:(struct sqlite3 { } *)a0 message:(id)a1;

- (id)description;
- (BOOL)CK_isCKSQLiteError;

@end
