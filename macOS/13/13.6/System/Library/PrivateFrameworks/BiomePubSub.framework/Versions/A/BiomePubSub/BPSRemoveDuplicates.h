@protocol BPSPublisher;

@interface BPSRemoveDuplicates : BPSPublisher

@property (readonly, nonatomic) id<BPSPublisher> upstream;
@property (readonly, copy, nonatomic) id /* block */ isDuplicate;

+ (id)new;

- (id)init;
- (void).cxx_destruct;
- (void)subscribe:(id)a0;
- (id)initWithUpstream:(id)a0 isDuplicate:(id /* block */)a1;

@end
