@interface FxStream : NSObject {
    struct FxStreamPriv { id x0; } *_priv;
}

- (void)dealloc;
- (id)init;
- (id)provider;
- (id)pin;
- (void)setPin:(id)a0;
- (id)createSampleAtTime:(double)a0;

@end
