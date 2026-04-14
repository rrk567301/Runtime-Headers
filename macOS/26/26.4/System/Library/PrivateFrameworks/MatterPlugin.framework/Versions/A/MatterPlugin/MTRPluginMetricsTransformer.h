@class NSMapTable;

@interface MTRPluginMetricsTransformer : NSObject

@property (retain) NSMapTable *commandPathRegistry;

- (void).cxx_destruct;
- (id)init;
- (void)dispatchInvokeCommandExpectationMetric:(id)a0;
- (id)registerCommandPath:(id)a0 class:(Class)a1;
- (void)unregisterCommandPath:(id)a0;

@end
