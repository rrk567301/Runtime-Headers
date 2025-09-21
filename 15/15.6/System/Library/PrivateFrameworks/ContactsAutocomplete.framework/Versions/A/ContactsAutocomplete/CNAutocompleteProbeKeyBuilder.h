@class NSString, NSArray;

@interface CNAutocompleteProbeKeyBuilder : NSObject

@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) NSArray *prefixes;
@property (retain, nonatomic) NSArray *suffixes;

+ (id)builderWithKey:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithKey:(id)a0;
- (id)build;
- (id)prediction;
- (id)addBatchIndex:(unsigned long long)a0;
- (id)addDuetModelID;
- (id)addDuetReturnedResults:(char)a0;
- (id)prefixedSearch;
- (void)useString:(id)a0 forSuffixAtIndex:(unsigned long long)a1;

@end
