@class NSArray;

@interface WFImageSymbolConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long representationType;
@property (readonly, nonatomic) id platformSymbolConfiguration;
@property (readonly, nonatomic) double pointSize;
@property (readonly, copy, nonatomic) NSArray *hierarchicalColors;
@property (nonatomic) unsigned long long weight;

+ (id)configurationWithPointSize:(double)a0;
+ (id)configurationWithNSImageSymbolConfiguration:(id)a0;
+ (id)configurationWithPointSize:(double)a0 hierarchicalColors:(id)a1;
+ (id)configurationWithUIImageSymbolConfiguration:(id)a0;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)appKitConfiguration;
- (id)initWithPlatformSymbolConfiguration:(id)a0;
- (id)initWithPointSize:(double)a0 hierarchicalColors:(id)a1;
- (id)platformHierarchicalColors;
- (double)platformWeight;
- (id)uiKitConfiguration;

@end
