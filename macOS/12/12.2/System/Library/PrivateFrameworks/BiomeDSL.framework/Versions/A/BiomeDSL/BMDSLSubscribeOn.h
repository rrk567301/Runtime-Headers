@class BMDSL;
@protocol BMDSLScheduler;

@interface BMDSLSubscribeOn : BPSPublisher

@property (readonly, nonatomic) BMDSL *upstream;
@property (readonly, nonatomic) id<BMDSLScheduler> scheduler;

- (void).cxx_destruct;
- (void)subscribe:(id)a0;
- (id)initWithUpstream:(id)a0 scheduler:(id)a1;

@end
