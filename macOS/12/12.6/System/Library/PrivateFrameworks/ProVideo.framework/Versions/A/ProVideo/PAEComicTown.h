@class TDreamManager;

@interface PAEComicTown : PAEFilterDefaultBase {
    TDreamManager *_tdManager;
}

- (void)dealloc;
- (id)properties;
- (BOOL)variesOverTime;
- (BOOL)addParameters;
- (id)initWithAPIManager:(id)a0;
- (BOOL)canThrowRenderOutput:(id)a0 withInput:(id)a1 withInfo:(struct { union { double x0; struct *x1; } x0; unsigned long long x1; unsigned long long x2; double x3; double x4; unsigned long long x5; })a2;

@end
