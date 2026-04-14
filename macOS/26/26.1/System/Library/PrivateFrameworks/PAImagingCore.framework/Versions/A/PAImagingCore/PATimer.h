@interface PATimer : NSObject {
    double _start;
}

+ (void)barrier;
+ (void)initialize;
+ (id)timer;
+ (void)removeCallback:(id)a0;
+ (id)addCallback:(id /* block */)a0;

- (void)record:(id)a0;
- (void)reset;
- (double)duration;
- (id)init;
- (void)record:(id)a0 context:(id)a1;
- (void)record:(id)a0 context:(id)a1 comment:(id)a2;
- (void)record:(id)a0 domain:(id)a1 context:(id)a2;
- (void)record:(id)a0 domain:(id)a1 context:(id)a2 comment:(id)a3;
- (void)record:(id)a0 comment:(id)a1;
- (void)record:(id)a0 domain:(id)a1;

@end
