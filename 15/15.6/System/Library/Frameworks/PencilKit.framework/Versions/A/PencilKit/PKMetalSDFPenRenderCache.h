@class NSArray, NSString, NSMutableArray;

@interface PKMetalSDFPenRenderCache : NSObject <PKStrokeRenderCache> {
    NSMutableArray *_buffers;
    unsigned long long _totalCost;
    long long _renderZoomFactor;
    char _purgeableBuffers;
}

@property (readonly, nonatomic) NSArray *buffers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (char)lockPurgeableResourcesAddToSet:(id)a0;
- (void)addBuffer:(id)a0;
- (unsigned long long)cacheCost;
- (id)initWithPurgeableBuffers:(char)a0 renderZoomFactor:(long long)a1;
- (char)isCompatibleWithInk:(id)a0 renderZoomFactor:(long long)a1;
- (char)needsCompute;

@end
