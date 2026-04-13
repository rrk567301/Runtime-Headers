@class NSArray;

@interface WFImageSymbolConfiguration : NSObject

@property (readonly, nonatomic) double pointSize;
@property (readonly, copy, nonatomic) NSArray *hierarchicalColors;
@property (nonatomic) unsigned long long weight;

+ (id)configurationWithPointSize:(double)a0;
+ (id)configurationWithPointSize:(double)a0 hierarchicalColors:(id)a1;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithPointSize:(double)a0 hierarchicalColors:(id)a1;
- (double)platformWeight;
- (id)appKitConfiguration;
- (id)platformHierarchicalColors;

@end
