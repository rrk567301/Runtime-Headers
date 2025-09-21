@class NSDictionary, NSMutableArray;

@interface MRTransitionShatter : MRTransition {
    char mIsLoaded;
    NSDictionary *mLayout;
    NSMutableArray *mMasks;
}

+ (void)initialize;
+ (id)shatterDescriptions;

- (void)unload;
- (void)setPixelSize:(struct CGSize { double x0; double x1; })a0;
- (void)_renderSublayer:(id)a0 layerCount:(long long)a1 sourceIsText:(char)a2 targetIsText:(char)a3 currentShader:(id)a4 sourceSize:(struct CGSize { double x0; double x1; })a5 targetSize:(struct CGSize { double x0; double x1; })a6 atTime:(double)a7 inContext:(id)a8 withArguments:(id)a9;
- (id)initWithTransitionID:(id)a0;
- (char)isLoadedForTime:(double)a0;
- (char)prerenderForTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (void)renderAtTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;

@end
