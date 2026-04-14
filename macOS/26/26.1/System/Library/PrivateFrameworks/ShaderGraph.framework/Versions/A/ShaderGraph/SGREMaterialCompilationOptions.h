@interface SGREMaterialCompilationOptions : NSObject {
    void /* unknown type, empty encoding */ forceEnableTier1FallbackSupport;
}

@property (nonatomic, readonly) struct CGColorSpace { } *workingColorSpace;
@property (nonatomic) BOOL enableFailedCompileMaterial;

- (void).cxx_destruct;
- (id)init;
- (id)initWithWorkingColorSpace:(struct CGColorSpace { } *)a0;

@end
