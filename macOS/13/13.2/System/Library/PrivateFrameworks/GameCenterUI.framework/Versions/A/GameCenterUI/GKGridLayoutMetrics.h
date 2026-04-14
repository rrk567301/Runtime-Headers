@class NSString, NSMutableDictionary;

@interface GKGridLayoutMetrics : NSObject <NSCopying>

@property (retain, nonatomic) NSMutableDictionary *keyToMetrics;
@property (retain, nonatomic) NSMutableDictionary *locationToKeyList;
@property (retain, nonatomic) NSString *layoutKey;

+ (id)metrics;

- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)configureCollectionView:(id)a0;
- (id)_gkDescriptionWithChildren:(long long)a0;
- (id)_gkDescription;
- (id)localDescription;
- (long long)prepareLayout:(id)a0 startingAtSection:(long long)a1;
- (void)enumerateSupplementaryLocations:(id /* block */)a0;
- (void)enumerateSupplementaryMetricsUsingBlock:(id /* block */)a0;
- (id)keyListForLocation:(unsigned long long)a0;
- (id)listForLocation:(unsigned long long)a0;
- (void)insertSupplementaryMetrics:(id)a0 forKey:(id)a1 atLocation:(unsigned long long)a2;
- (void)addSupplementaryMetrics:(id)a0 forKey:(id)a1 atLocation:(unsigned long long)a2;
- (void)mergeSupplementaryMetricsFromEnclosingMetrics:(id)a0 atLocation:(unsigned long long)a1 globalRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (id)supplementaryMetricsForKey:(id)a0;
- (void)replaceSupplementaryMetrics:(id)a0 forKey:(id)a1;
- (void)removeSupplementaryMetricsForKey:(id)a0;

@end
