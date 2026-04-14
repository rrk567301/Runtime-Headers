@protocol APPurgeableCacheObjectP;

@interface APPurgeableCacheEntry : NSObject

@property (retain, nonatomic) id<APPurgeableCacheObjectP> object;
@property (nonatomic) double timestamp;

- (void).cxx_destruct;
- (id)initWithObject:(id)a0;

@end
