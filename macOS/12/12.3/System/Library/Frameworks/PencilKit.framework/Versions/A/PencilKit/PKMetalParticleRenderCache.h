@class NSArray, NSString, NSMutableArray, PKInk;

@interface PKMetalParticleRenderCache : NSObject <PKStrokeRenderCache> {
    NSMutableArray *_buffers;
    unsigned long long _totalCost;
}

@property (readonly, nonatomic) NSArray *buffers;
@property (readonly, nonatomic) PKInk *ink;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)needsCompute;
- (void)addBuffer:(id)a0;
- (id)initWithDevice:(id)a0 ink:(id)a1;
- (BOOL)isCompatibleWithInk:(id)a0;
- (BOOL)lockPurgeableResourcesAddToSet:(id)a0;
- (unsigned long long)cacheCost;

@end
