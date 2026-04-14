@protocol BPSPublisher;

@interface BPSCombineLatest : BPSPublisher

@property (retain, nonatomic) id latestA;
@property (retain, nonatomic) id latestB;
@property (nonatomic) BOOL nextIsB;
@property (readonly, nonatomic) id<BPSPublisher> a;
@property (readonly, nonatomic) id<BPSPublisher> b;

+ (id)new;

- (BOOL)completed;
- (void)subscribe:(id)a0;
- (id)nextEvent;
- (id)upstreamPublishers;
- (void)reset;
- (void).cxx_destruct;
- (id)init;
- (id)initWithA:(id)a0 b:(id)a1;

@end
