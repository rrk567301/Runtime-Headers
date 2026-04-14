@protocol BPSPublisher;

@interface BPSRemoveDuplicates : BPSPublisher

@property (retain, nonatomic) id last;
@property (readonly, nonatomic) id<BPSPublisher> upstream;
@property (readonly, copy, nonatomic) id /* block */ isDuplicate;

+ (id)new;

- (void)subscribe:(id)a0;
- (id)nextEvent;
- (id)upstreamPublishers;
- (void)reset;
- (void).cxx_destruct;
- (id)init;
- (id)initWithUpstream:(id)a0 isDuplicate:(id /* block */)a1;

@end
