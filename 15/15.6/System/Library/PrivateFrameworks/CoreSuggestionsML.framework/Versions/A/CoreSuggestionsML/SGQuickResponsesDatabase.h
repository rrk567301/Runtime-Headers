@class NSString, _PASSqliteDatabase;

@interface SGQuickResponsesDatabase : NSObject <_PASDatabaseMigrationProtocol>

@property (readonly, nonatomic) _PASSqliteDatabase *db;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_openAnotherHandleForPath:(id)a0;
+ (id)_openFreshHandleForPath:(id)a0 inMemory:(char)a1;

- (void).cxx_destruct;
- (id)databaseHandle;
- (id)migrations;
- (id)queriesToSkipFromEmptyToVersion:(unsigned int *)a0;
- (char)_handleCorruptionWithCheck:(char)a0 path:(id)a1 inMemory:(char)a2;
- (char)_performMigrationsWithPath:(id)a0 inMemory:(char)a1 attemptIteration:(int)a2;
- (id)initInDirectory:(id)a0 inMemory:(char)a1 withMigration:(char)a2;
- (id)initInDirectory:(id)a0 inMemory:(char)a1 withMigration:(char)a2 forTools:(char)a3;

@end
