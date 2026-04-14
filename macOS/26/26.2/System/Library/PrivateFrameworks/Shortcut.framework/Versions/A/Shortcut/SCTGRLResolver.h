@class SCTGRL;

@interface SCTGRLResolver : SCTInvocation {
    SCTGRL *mGRL;
    double mDelay;
}

- (void)perform:(id)a0;
- (id)description;
- (void)dealloc;
- (id)initWithGRL:(id)a0 invocation:(id)a1;
- (id)initWithGRL:(id)a0 invocation:(id)a1 withDelay:(double)a2;
- (id)initWithGRL:(id)a0 selector:(SEL)a1 target:(id)a2;

@end
