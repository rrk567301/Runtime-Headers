@class NSPredicate, NSDictionary;

@interface PKGraphicsHardwareRequirements : PKPredicateRequirements {
    NSDictionary *_symbolTable;
}

@property (retain) NSPredicate *requiredGLPredicate;
@property (retain) NSPredicate *requiredCLPredicate;
@property (retain) NSPredicate *requiredMetalPredicate;
@property BOOL requireSingleDevice;

- (void)dealloc;
- (BOOL)areRequirementsMet;
- (void)_loadSymbolicConstants;
- (BOOL)_evaluateForOpenGLVersion:(long long)a0 pixelFormatAttributes:(int *)a1;
- (BOOL)_evaluateForOpenCLOnly;
- (BOOL)_evaluateForMetalOnly;
- (struct _CGLContextObject { } *)_newGLContextWithPixelFormatAttributes:(int *)a0 numberOfDevices:(int *)a1;
- (unsigned long long)_registryIDForOpenGLContext:(struct _CGLContextObject { } *)a0;

@end
