@protocol OCDDelayedNodeContext;

@interface OCDDelayedNode : NSObject {
    id<OCDDelayedNodeContext> mDelayedContext;
    BOOL mLoaded;
}

- (BOOL)load;
- (BOOL)isLoaded;
- (void).cxx_destruct;
- (void)setLoaded:(BOOL)a0;
- (id)delayedContext;
- (void)setDelayedContext:(id)a0;

@end
