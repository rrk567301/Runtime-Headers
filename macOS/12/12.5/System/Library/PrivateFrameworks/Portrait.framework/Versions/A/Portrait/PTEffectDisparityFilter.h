@class PTEffectUtil;
@protocol MTLCommandQueue;

@interface PTEffectDisparityFilter : NSObject {
    id<MTLCommandQueue> _commandQueue;
    PTEffectUtil *_effectUtil;
}

- (void).cxx_destruct;
- (unsigned int)reset;
- (id)initWithDevice:(id)a0 commandQueue:(id)a1 effectUtil:(id)a2;
- (unsigned int)prepareFilter:(id)a0 network:(id)a1;
- (unsigned int)applyFilter:(id)a0 inOutFilteredDisparity:(id)a1 updateCoefficient:(float)a2;
- (id)debugTexture;

@end
