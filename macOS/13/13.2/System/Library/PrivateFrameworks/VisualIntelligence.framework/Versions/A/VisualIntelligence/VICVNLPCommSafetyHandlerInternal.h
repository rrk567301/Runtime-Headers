@class CVNLPCommSafetyHandler;

@interface VICVNLPCommSafetyHandlerInternal : NSObject {
    CVNLPCommSafetyHandler *_cvnlpCommSafetyHandler;
}

- (void).cxx_destruct;
- (id)initWithPreferredMetalDevice:(id)a0;
- (id)generateClassificationScoresForPixelBuffer:(struct __CVBuffer { } *)a0;

@end
