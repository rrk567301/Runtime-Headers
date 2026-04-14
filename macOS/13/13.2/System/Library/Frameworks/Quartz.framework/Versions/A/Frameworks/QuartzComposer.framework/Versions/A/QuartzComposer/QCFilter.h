@class QCImageKernel;

@interface QCFilter : CIFilter {
    struct OpaqueJSContext { } *_jsContext;
    QCImageKernel *_patch;
}

- (void)dealloc;
- (void)finalize;
- (id)initWithQCImageKernelPatch:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })QCImageKernelJavaScriptROIHandler:(int)a0 destRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 userInfo:(id)a2;
- (void)setROISelectorForKernel:(id)a0 jsROIFunction:(struct OpaqueJSValue { } *)a1;
- (void)setROIInfoForKernel:(id)a0 jsROIInfo:(struct OpaqueJSValue { } *)a1;

@end
