@protocol OCDDelayedNodeContext;

@interface OCDDelayedNode : NSObject {
    id<OCDDelayedNodeContext> mDelayedContext;
    BOOL mLoaded;
}

- (BOOL)load;
- (BOOL)isLoaded;
- (void)setLoaded:(BOOL)a0;
- (void).cxx_destruct;
- (id)delayedContext;
- (void)setDelayedContext:(id)a0;

@end
