@class IASDataStore, NSString, NSDateFormatter, NSNumber, IASDataStoreSchema;
@protocol IASDataStoreMigratorProtocol;

@interface IASDataStoreTable : NSObject <IASDataStoreTableProtocol>

@property (copy, nonatomic) NSString *databasePath;
@property (nonatomic) struct sqlite3 { } *database;
@property (readonly, copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSNumber *tableVersion;
@property (readonly, nonatomic) NSDateFormatter *dateFormatter;
@property (readonly, nonatomic) id<IASDataStoreMigratorProtocol> migrator;
@property (retain, nonatomic) IASDataStoreSchema *schema;
@property (weak, nonatomic) IASDataStore *parentDataStore;

+ (unsigned long long)retentionPeriod;
+ (void)configureSqlite3;

- (BOOL)cleanup;
- (void).cxx_destruct;
- (void)dealloc;
- (id)_createTableSQL;
- (void)_bindValue:(id)a0 toStatement:(struct sqlite3_stmt { } *)a1 atIndex:(int)a2 withColumnDataType:(unsigned long long)a3;
- (BOOL)_cleanupWithCutoffDate:(id)a0;
- (id)_getDatabaseDirectory;
- (BOOL)_initializeDatabase;
- (BOOL)cleanupWithCutoffDate:(id)a0;
- (id)getAllRows;
- (id)getValueForKey:(id)a0 forColumnName:(id)a1 withDate:(id)a2;
- (BOOL)incrementKey:(id)a0 forColumnName:(id)a1 withDate:(id)a2;
- (id)initWithName:(id)a0 withTableVersion:(id)a1 withDateFormatter:(id)a2 withSchema:(id)a3 withMigrator:(id)a4;
- (id)initWithName:(id)a0 withTableVersion:(id)a1 withSchema:(id)a2 withMigrator:(id)a3;
- (BOOL)updateKey:(id)a0 withValue:(id)a1 forColumnName:(id)a2 withDate:(id)a3;

@end
