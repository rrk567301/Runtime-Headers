@interface CPLBackgroundActivity : NSObject

@property (readonly) char shouldDefer;

- (id)addDeferHandler:(id /* block */)a0;
- (void)removeDeferHandler:(id)a0;
- (void)updatePrediction:(id)a0;

@end
