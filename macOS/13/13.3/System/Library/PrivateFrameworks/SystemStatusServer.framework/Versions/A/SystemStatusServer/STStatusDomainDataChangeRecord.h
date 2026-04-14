@class BSMutableIntegerMap, BSIntegerSet;

@interface STStatusDomainDataChangeRecord : NSObject {
    BSMutableIntegerMap *_fallbackDataByClientKeyByDomain;
    BSMutableIntegerMap *_entriesByDomain;
    BSMutableIntegerMap *_cachedCurrentDataByDomain;
}

@property (readonly, nonatomic) BSIntegerSet *domainsWithData;

- (id)init;
- (void).cxx_destruct;
- (void)addDiff:(id)a0 forClientKey:(id)a1 domain:(unsigned long long)a2;
- (id)currentDataForDomain:(unsigned long long)a0;
- (id)fallbackDataForClientKey:(id)a0 domain:(unsigned long long)a1;
- (void)removeAllEntriesForClientKey:(id)a0 domain:(unsigned long long)a1;
- (void)setData:(id)a0 forClientKey:(id)a1 domain:(unsigned long long)a2;
- (void)setFallbackData:(id)a0 forClientKey:(id)a1 domain:(unsigned long long)a2;

@end
