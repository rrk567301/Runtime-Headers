@class NSMutableDictionary, IASDataStoreSchema;

@interface IASDataStoreKey : NSObject

@property (readonly, nonatomic) IASDataStoreSchema *schema;
@property (retain, nonatomic) NSMutableDictionary *columnValues;

+ (id)schema;

- (void).cxx_destruct;
- (id)valueForColumn:(id)a0;
- (id)initWithColumnValues:(id)a0;
- (id)orderedColumnNamesForTableRetention:(unsigned long long)a0;

@end
