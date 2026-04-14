@class NSArray;

@interface IASDataStoreSchema : NSObject

@property (readonly, nonatomic) NSArray *columns;

+ (id)schema;

- (void).cxx_destruct;
- (id)description;
- (id)initWithColumns:(id)a0;
- (id)columnTypesDictionaryForTableRetention:(unsigned long long)a0;
- (id)columnsCompatibleWithTableRetention:(unsigned long long)a0;
- (id)keyColumnsCompatibleWithTableRetention:(unsigned long long)a0;
- (id)orderedColumnNamesForTableRetention:(unsigned long long)a0;
- (id)valueColumnsCompatibleWithTableRetention:(unsigned long long)a0;

@end
