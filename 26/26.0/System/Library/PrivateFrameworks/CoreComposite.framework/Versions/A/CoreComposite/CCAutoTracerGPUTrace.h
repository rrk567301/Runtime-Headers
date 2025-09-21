@protocol MTLCaptureScope;

@interface CCAutoTracerGPUTrace : NSObject <CCAutoTracerEngine> {
    int _frameCountMax;
    id<MTLCaptureScope> _scope;
    int _frameCount;
}

- (id)init;
- (void).cxx_destruct;
- (void)tick;
- (void)startActionForTracer:(id)a0 withLength:(double)a1;

@end
