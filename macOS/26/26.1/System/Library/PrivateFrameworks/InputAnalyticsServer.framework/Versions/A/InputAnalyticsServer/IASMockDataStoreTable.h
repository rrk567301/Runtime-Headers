@class IASDataStore, NSString, NSMutableDictionary, NSDateFormatter, NSNumber, IASDataStoreSchema;
@protocol IASDataStoreMigratorProtocol;

@interface IASMockDataStoreTable : NSObject <IASDataStoreTableProtocol>

@property (retain, nonatomic) NSMutableDictionary *table;
@property (readonly, copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSNumber *tableVersion;
@property (readonly, nonatomic) NSDateFormatter *dateFormatter;
@property (readonly, nonatomic) id<IASDataStoreMigratorProtocol> migrator;
@property (retain, nonatomic) IASDataStoreSchema *schema;
@property (weak, nonatomic) IASDataStore *parentDataStore;

+ (unsigned long long)retentionPeriod;

- (BOOL)cleanup;
- (void).cxx_destruct;
- (id)_getQueryStringForKey:(id)a0 withDate:(id)a1;
- (BOOL)cleanupWithCutoffDate:(id)a0;
- (id)getAllRows;
- (id)getValueForKey:(id)a0 forColumnName:(id)a1 withDate:(id)a2;
- (BOOL)incrementKey:(id)a0 forColumnName:(id)a1 withDate:(id)a2;
- (id)initWithName:(id)a0 withTableVersion:(id)a1 withDateFormatter:(id)a2 withSchema:(id)a3 withMigrator:(id)a4;
- (id)initWithName:(id)a0 withTableVersion:(id)a1 withSchema:(id)a2 withMigrator:(id)a3;
- (BOOL)updateKey:(id)a0 withValue:(id)a1 forColumnName:(id)a2 withDate:(id)a3;

@end
