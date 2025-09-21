@class NSNumber;

@interface ATXSemanticSearchConstants : NSObject

@property (class, nonatomic, readonly) NSNumber *embeddingIdx;
@property (class, nonatomic, readonly) NSNumber *aNN_max_count;
@property (class, nonatomic, readonly) NSNumber *aNN_brute_force;
@property (class, nonatomic, readonly) NSNumber *aNN_max_distance;

- (id)init;

@end
