@class IASDataStore, NSMutableDictionary, NSString, NSDateFormatter, NSNumber;
@protocol IASDataStoreMigratorProtocol;

@interface IASMockDataStoreTable : NSObject <IASDataStoreTableProtocol>

@property (copy, nonatomic) NSNumber *tableVersion;
@property (retain, nonatomic) NSMutableDictionary *table;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) NSDateFormatter *dateFormatter;
@property (readonly, nonatomic) id<IASDataStoreMigratorProtocol> migrator;
@property (weak, nonatomic) IASDataStore *parentDataStore;

- (BOOL)cleanup;
- (void).cxx_destruct;
- (id)_getQueryStringForKey:(id)a0 withMetadata:(id)a1 withDate:(id)a2;
- (id)getValueForKey:(id)a0 withMetadata:(id)a1 withDate:(id)a2;
- (BOOL)incrementKey:(id)a0 withMetadata:(id)a1 withDate:(id)a2;
- (id)initWithName:(id)a0 withTableVersion:(id)a1 withDateFormatter:(id)a2 withMigrator:(id)a3;
- (id)initWithName:(id)a0 withTableVersion:(id)a1 withMigrator:(id)a2;
- (BOOL)updateKey:(id)a0 withValue:(id)a1 withMetadata:(id)a2 withDate:(id)a3;

@end
