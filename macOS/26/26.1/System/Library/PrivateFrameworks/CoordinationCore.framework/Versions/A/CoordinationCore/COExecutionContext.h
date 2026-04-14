@class NSDictionary;

@interface COExecutionContext : NSObject <NSCopying, NSMutableCopying>

@property (copy, nonatomic) NSDictionary *metadata;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)objectForKey:(id)a0;
- (id)initWithDispatchQueue:(id)a0;
- (void)dispatchAsync:(id /* block */)a0;
- (id)dispatchQueue;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)label;
- (id)init;
- (id)initWithMetadata:(id)a0;
- (id /* block */)analyticsRecorder;
- (void)assertDispatchQueue;
- (id)constituentForMe;
- (void)dispatchSync:(id /* block */)a0;
- (BOOL)leaderElectionConfigured;
- (id)meshControllerDescription;
- (id)meshName;
- (id)networkActivityFactory;

@end
