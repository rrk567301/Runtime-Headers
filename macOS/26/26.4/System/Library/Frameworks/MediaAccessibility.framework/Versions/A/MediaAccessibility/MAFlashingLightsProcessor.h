@class PSEVideoProcessor;

@interface MAFlashingLightsProcessor : NSObject

@property (retain, nonatomic) PSEVideoProcessor *pse;

- (void).cxx_destruct;
- (id)init;
- (BOOL)canProcessSurface:(struct __IOSurface { } *)a0;
- (id)processSurface:(struct __IOSurface { } *)a0 outSurface:(struct __IOSurface { } *)a1 timestamp:(double)a2 options:(id)a3;

@end
