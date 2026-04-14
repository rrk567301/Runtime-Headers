@class NSString;

@interface RBSurfaceContents : NSObject <CARenderValue> {
    struct cf_ptr<__IOSurface *> { struct __IOSurface *_p; } _surface;
    struct unique_ptr<void, (anonymous namespace)::RenderUnref> { struct { void *__ptr_; } ; } _render_surface;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void *)CA_copyRenderValue;
- (void)CA_prepareRenderValue;
- (id)replacementObjectForCoder:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void *)CA_copyRenderValueWithColorspace:(struct CGColorSpace { } *)a0;

@end
