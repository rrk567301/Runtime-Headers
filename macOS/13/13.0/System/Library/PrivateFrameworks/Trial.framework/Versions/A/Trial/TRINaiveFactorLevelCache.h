@class NSDictionary;

@interface TRINaiveFactorLevelCache : NSObject <TRIFactorLevelCaching> {
    NSDictionary *_factorLevels;
}

- (id)init;
- (id)objectForKeyedSubscript:(id)a0;
- (void).cxx_destruct;
- (void)enumerateFactorLevelsUsingBlock:(id /* block */)a0;
- (id)initWithFactorLevels:(id)a0;

@end
