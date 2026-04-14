@interface RBSPrefetchPageAttribute : RBSAttribute

@property (readonly, nonatomic) unsigned long long scenario;

+ (id)initWithScenario:(unsigned long long)a0;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;

@end
