@protocol MTLCaptureScope;

@interface CCAutoTracerGPUTrace : NSObject <CCAutoTracerEngine> {
    int _frameCountMax;
    id<MTLCaptureScope> _scope;
    int _frameCount;
}

- (void).cxx_destruct;
- (id)init;
- (void)tick;
- (void)startActionForTracer:(id)a0 withLength:(double)a1;

@end
