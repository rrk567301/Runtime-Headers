@interface CIRenderInfo : NSObject {
    void *_priv;
}

@property (readonly) double kernelExecutionTime;
@property (readonly) double kernelCompileTime;
@property (readonly) long long passCount;
@property (readonly) long long pixelsProcessed;

+ (id)renderInfoWithCompletedTask:(id)a0;

- (void)dealloc;
- (id)_pdfDataRepresentation;
- (id)init;
- (id)description;
- (long long)pixelsOverdrawn;
- (id)initWithCompletedTask:(id)a0;
- (long long)kernelExecutionCycles;

@end
