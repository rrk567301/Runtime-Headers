@class VCPObjectPool;

@interface VCPColorNormalizationAnalyzer : NSObject {
    VCPObjectPool *_sessionPool;
}

- (void).cxx_destruct;
- (id)init;
- (int)analyzeCGImage:(struct CGImage { } *)a0 results:(id *)a1;

@end
