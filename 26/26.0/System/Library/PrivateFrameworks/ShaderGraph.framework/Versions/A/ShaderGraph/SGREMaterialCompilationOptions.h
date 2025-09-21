@interface SGREMaterialCompilationOptions : NSObject {
    void /* unknown type, empty encoding */ forceEnableTier1FallbackSupport;
}

@property (nonatomic, readonly) struct CGColorSpace { } *workingColorSpace;
@property (nonatomic) BOOL enableFailedCompileMaterial;

- (id)init;
- (void).cxx_destruct;
- (id)initWithWorkingColorSpace:(struct CGColorSpace { } *)a0;

@end
