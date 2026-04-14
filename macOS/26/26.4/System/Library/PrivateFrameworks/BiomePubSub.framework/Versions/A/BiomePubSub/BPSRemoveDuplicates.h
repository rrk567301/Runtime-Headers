@protocol BPSPublisher;

@interface BPSRemoveDuplicates : BPSPublisher

@property (retain, nonatomic) id last;
@property (readonly, nonatomic) id<BPSPublisher> upstream;
@property (readonly, copy, nonatomic) id /* block */ isDuplicate;

+ (id)new;

- (id)upstreamPublishers;
- (id)nextEvent;
- (void)subscribe:(id)a0;
- (void).cxx_destruct;
- (void)reset;
- (id)init;
- (id)initWithUpstream:(id)a0 isDuplicate:(id /* block */)a1;

@end
