@interface VKIconImage : NSObject {
    struct shared_ptr<grl::IconImage> { struct IconImage *__ptr_; struct __shared_weak_count *__cntrl_; } _iconImage;
    struct _retain_ptr<CGColor *, geo::_retain_cf<CGColor *>, geo::_release_cf, geo::_hash_cf, geo::_equal_cf> { void /* function */ **_vptr$_retain_ptr; struct CGColor *_obj; struct _retain_cf<CGColor *> { } _retain; struct _release_cf { } _release; } _fillColor;
    struct _retain_ptr<CGColor *, geo::_retain_cf<CGColor *>, geo::_release_cf, geo::_hash_cf, geo::_equal_cf> { void /* function */ **_vptr$_retain_ptr; struct CGColor *_obj; struct _retain_cf<CGColor *> { } _retain; struct _release_cf { } _release; } _haloColor;
    struct _retain_ptr<CGColor *, geo::_retain_cf<CGColor *>, geo::_release_cf, geo::_hash_cf, geo::_equal_cf> { void /* function */ **_vptr$_retain_ptr; struct CGColor *_obj; struct _retain_cf<CGColor *> { } _retain; struct _release_cf { } _release; } _glyphColor;
    struct _retain_ptr<CGColor *, geo::_retain_cf<CGColor *>, geo::_release_cf, geo::_hash_cf, geo::_equal_cf> { void /* function */ **_vptr$_retain_ptr; struct CGColor *_obj; struct _retain_cf<CGColor *> { } _retain; struct _release_cf { } _release; } _calloutFillColor;
    struct _retain_ptr<CGColor *, geo::_retain_cf<CGColor *>, geo::_release_cf, geo::_hash_cf, geo::_equal_cf> { void /* function */ **_vptr$_retain_ptr; struct CGColor *_obj; struct _retain_cf<CGColor *> { } _retain; struct _release_cf { } _release; } _calloutHaloColor;
    struct _retain_ptr<CGColor *, geo::_retain_cf<CGColor *>, geo::_release_cf, geo::_hash_cf, geo::_equal_cf> { void /* function */ **_vptr$_retain_ptr; struct CGColor *_obj; struct _retain_cf<CGColor *> { } _retain; struct _release_cf { } _release; } _calloutTextColor;
}

- (float)opacity;
- (id)init:(struct shared_ptr<grl::IconImage> { struct IconImage *x0; struct __shared_weak_count *x1; })a0;
- (float)contentScale;
- (struct CGColor { } *)fillColor;
- (struct CGSize { double x0; double x1; })imageSize;
- (struct CGColor { } *)calloutTextColor;
- (unsigned int)calloutShape;
- (BOOL)isBalloonShape;
- (void).cxx_destruct;
- (struct CGColor { } *)calloutFillColor;
- (id).cxx_construct;
- (struct CGImage { } *)image;
- (struct CGColor { } *)haloColor;
- (struct CGColor { } *)glyphColor;
- (struct CGColor { } *)calloutHaloColor;

@end
