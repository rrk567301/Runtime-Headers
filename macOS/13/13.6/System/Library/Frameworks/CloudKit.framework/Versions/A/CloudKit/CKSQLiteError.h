@interface CKSQLiteError : CKInternalError

@property (readonly, nonatomic) int sqliteCode;
@property (readonly, nonatomic) int sqliteExtendedCode;

+ (id)databaseCorruptError;
+ (id)errorForSQLite:(struct sqlite3 { } *)a0 message:(id)a1;
+ (id)errorForSQLite:(struct sqlite3 { } *)a0 message:(id)a1 args:(char *)a2;
+ (BOOL)isConstraintError:(id)a0;
+ (BOOL)isCorruptDatabaseError:(id)a0;
+ (BOOL)isNoMatchingRowError:(id)a0;
+ (BOOL)isNoUniqueRowError:(id)a0;
+ (BOOL)isUniqueConstraintError:(id)a0;

- (id)description;
- (BOOL)CK_isCKSQLiteError;

@end
