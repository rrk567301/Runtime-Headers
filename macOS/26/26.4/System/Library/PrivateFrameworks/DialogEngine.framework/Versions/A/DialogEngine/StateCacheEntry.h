@class NSString, StateCacheMeta;

@interface StateCacheEntry : NSObject

@property (copy, nonatomic) NSString *state;
@property (copy, nonatomic) StateCacheMeta *meta;
@property (nonatomic) long long action;

- (id)initWithState:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithState:(id)a0 meta:(id)a1;
- (id)initWithState:(id)a0 meta:(id)a1 action:(long long)a2;

@end
