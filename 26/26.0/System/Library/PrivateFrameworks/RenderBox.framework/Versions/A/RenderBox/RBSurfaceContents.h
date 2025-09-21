@class NSString;

@interface RBSurfaceContents : NSObject <CARenderValue> {
    struct cf_ptr<__IOSurface *> { struct __IOSurface *_p; } _surface;
    struct unique_ptr<void, (anonymous namespace)::RenderUnref> { void *__ptr_; } _render_surface;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)replacementObjectForCoder:(id)a0;
- (void *)CA_copyRenderValue;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)CA_prepareRenderValue;
- (void *)CA_copyRenderValueWithColorspace:(struct CGColorSpace { } *)a0;

@end
