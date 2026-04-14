@interface CPAggregateDictionary : NSObject

@property (readonly, nonatomic, getter=isEnabled) BOOL enabled;

+ (id)sharedAggregateDictionary;

- (int)commit;
- (void)subtractValue:(long long)a0 forKey:(id)a1;
- (void)setValue:(double)a0 forDistributionKey:(id)a1;
- (void)pushValue:(double)a0 forKey:(id)a1;
- (void)clearDistributionKey:(id)a0;
- (void)addValue:(long long)a0 forKey:(id)a1;
- (void)clearScalarKey:(id)a0;
- (void)decrementKey:(id)a0;
- (void)incrementKey:(id)a0;
- (void)significantTimeChanged;
- (void)setValue:(long long)a0 forScalarKey:(id)a1;

@end
