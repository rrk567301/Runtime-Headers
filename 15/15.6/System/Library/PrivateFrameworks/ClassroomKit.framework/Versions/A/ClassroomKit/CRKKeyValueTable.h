@class NSArray, CRKTable;

@interface CRKKeyValueTable : NSObject <CRKTablePrinting>

@property (readonly, copy, nonatomic) NSArray *keyValuePairs;
@property (readonly, nonatomic) CRKTable *table;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)crk_JSONRepresentationWithPrettyPrinting:(char)a0 sortKeys:(char)a1;
- (id)initWithKeyValuePairs:(id)a0;
- (id)tableString;

@end
