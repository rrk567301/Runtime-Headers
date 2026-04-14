@interface OKMediaLocationClusterPredicate : OKMediaClusterPredicate

@property (readonly) unsigned long long type;

- (id)title;
- (id)initWithType:(unsigned long long)a0;
- (void)dealloc;
- (float)efficiencyForItems:(id)a0;
- (id)evaluateItems:(id)a0 progressBlock:(id /* block */)a1;

@end
