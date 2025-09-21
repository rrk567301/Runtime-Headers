@interface IMDLegacyRecordBridge : NSObject

+ (void)prewarm;
+ (long long)schemaVersion;
+ (const struct { char *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; void /* function */ *x6; unsigned char x7; void *x8; int x9; struct *x10; void *x11; char *x12; void /* function */ *x13; void /* function */ *x14; int x15; struct *x16; int x17; void /* function */ *x18; int x19; } *)chatRecordDescriptor;
+ (BOOL)configureNewDatabaseUsingConnection:(struct CSDBSqliteConnection { struct CSDBSqliteDatabase *x0; struct sqlite3 *x1; struct __CFDictionary *x2; void *x3; void /* function */ *x4; unsigned int x5; void *x6; } *)a0;
+ (BOOL)createTablesUsingConnection:(struct CSDBSqliteConnection { struct CSDBSqliteDatabase *x0; struct sqlite3 *x1; struct __CFDictionary *x2; void *x3; void /* function */ *x4; unsigned int x5; void *x6; } *)a0;
+ (BOOL)createTriggersUsingConnection:(struct CSDBSqliteConnection { struct CSDBSqliteDatabase *x0; struct sqlite3 *x1; struct __CFDictionary *x2; void *x3; void /* function */ *x4; unsigned int x5; void *x6; } *)a0;
+ (const struct { char *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; void /* function */ *x6; unsigned char x7; void *x8; int x9; struct *x10; void *x11; char *x12; void /* function */ *x13; void /* function */ *x14; int x15; struct *x16; int x17; void /* function */ *x18; int x19; } *)messageRecordDescriptor;
+ (void)migrateChatLookupIfNeededUsingConnection:(struct CSDBSqliteConnection { struct CSDBSqliteDatabase *x0; struct sqlite3 *x1; struct __CFDictionary *x2; void *x3; void /* function */ *x4; unsigned int x5; void *x6; } *)a0;
+ (void)migrateChatTableIfNeededUsingConnection:(struct CSDBSqliteConnection { struct CSDBSqliteDatabase *x0; struct sqlite3 *x1; struct __CFDictionary *x2; void *x3; void /* function */ *x4; unsigned int x5; void *x6; } *)a0;
+ (long long)migrateFromVersion:(long long)a0 usingConnection:(struct CSDBSqliteConnection { struct CSDBSqliteDatabase *x0; struct sqlite3 *x1; struct __CFDictionary *x2; void *x3; void /* function */ *x4; unsigned int x5; void *x6; } *)a1;
+ (void)registerChatTableVersionUsingConnection:(struct CSDBSqliteConnection { struct CSDBSqliteDatabase *x0; struct sqlite3 *x1; struct __CFDictionary *x2; void *x3; void /* function */ *x4; unsigned int x5; void *x6; } *)a0;
+ (void)runMigrationTrial;

- (id)init;

@end
