@class NSString, NSArray;

@interface SCNCommonProfileProgramGeneratorMetal : SCNCommonProfileProgramGenerator {
    char _allowHotReload;
    char _useFunctionConstants;
    NSString *_originalSourceCode;
    NSArray *_injectionPointRanges;
    struct _NSRange { unsigned long long location; unsigned long long length; } _commonProfileIORange;
    NSString *_originalLightingSourceCode;
    NSArray *_lightingInjectionPointRanges;
}

- (void)dealloc;
- (int)profile;
- (void)_loadSourceCode;
- (struct __C3DFXProgram { } *)_newProgramWithHashCode:(struct __C3DProgramHashCode { } *)a0 engineContext:(struct __C3DEngineContext { } *)a1 introspectionDataPtr:(struct { long long x0; struct *x1; struct { long long x0; long long x1; } x2[4]; struct { long long x0; long long x1; } x3[4]; long long x4[4]; void *x5; void *x6; BOOL x7; } *)a2;
- (struct __C3DFXProgram { } *)_newProgramWithHashCodeWithFunctionConstants:(struct __C3DProgramHashCode { } *)a0 engineContext:(struct __C3DEngineContext { } *)a1 introspectionDataPtr:(struct { long long x0; struct *x1; struct { long long x0; long long x1; } x2[4]; struct { long long x0; long long x1; } x3[4]; long long x4[4]; void *x5; void *x6; BOOL x7; } *)a2;
- (void)collectShaderForProgram:(struct __C3DFXMetalProgram { } *)a0 hashCode:(id)a1 newVertexFunctionName:(id)a2 newFragmentFunctionName:(id)a3 sourceCodeBlock:(id /* block */)a4 additionalFileBlock:(id /* block */)a5;
- (void)emptyShaderCache;
- (id)initAllowingHotReload:(char)a0;
- (id)splitInputOutputStructsIfNeededForSourceCode:(id)a0 generatedFromReplacementStrings:(id)a1 perPixelLighting:(char)a2 clipDistanceCount:(unsigned long long)a3;

@end
