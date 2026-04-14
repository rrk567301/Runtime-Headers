@protocol BPSPublisher;

@interface BPSRemoveDuplicates : BPSPublisher

@property (retain, nonatomic) id last;
@property (readonly, nonatomic) id<BPSPublisher> upstream;
@property (readonly, copy, nonatomic) id /* block */ isDuplicate;

+ (id)new;

- (id)nextEvent;
- (id)upstreamPublishers;
- (void)subscribe:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (id)initWithUpstream:(id)a0 isDuplicate:(id /* block */)a1;

@end
