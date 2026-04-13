@class BSMutableIntegerMap, BSIntegerSet;

@interface STStatusDomainDataChangeRecord : NSObject

@property (readonly, copy, nonatomic) BSMutableIntegerMap *fallbackDataByClientKeyByDomain;
@property (readonly, copy, nonatomic) BSMutableIntegerMap *entriesByDomain;
@property (readonly, copy, nonatomic) BSMutableIntegerMap *cachedCurrentDataByDomain;
@property (readonly, nonatomic) BSIntegerSet *domainsWithData;

- (id)init;
- (void).cxx_destruct;
- (id)currentDataForDomain:(unsigned long long)a0;
- (void)setFallbackData:(id)a0 forClientKey:(id)a1 domain:(unsigned long long)a2;
- (void)removeAllEntriesForClientKey:(id)a0 domain:(unsigned long long)a1;
- (void)setData:(id)a0 forClientKey:(id)a1 domain:(unsigned long long)a2;
- (void)addDiff:(id)a0 forClientKey:(id)a1 domain:(unsigned long long)a2;
- (id)fallbackDataForClientKey:(id)a0 domain:(unsigned long long)a1;
- (void)_combineTrailingDiffEntriesIfPossible:(id)a0;

@end
