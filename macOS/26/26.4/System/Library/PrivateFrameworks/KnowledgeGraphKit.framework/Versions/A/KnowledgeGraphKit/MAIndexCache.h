@class NSDictionary, NSArray;

@interface MAIndexCache : NSObject

@property (readonly, nonatomic) NSDictionary *cache;
@property (readonly, copy, nonatomic) NSArray *labels;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithLabels:(id)a0;
- (long long)indexOfLabel:(id)a0;

@end
