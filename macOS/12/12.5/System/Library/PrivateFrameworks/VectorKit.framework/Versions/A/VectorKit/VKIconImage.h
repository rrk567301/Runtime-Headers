@interface VKIconImage : NSObject {
    struct shared_ptr<grl::IconImage> { struct IconImage *__ptr_; struct __shared_weak_count *__cntrl_; } _iconImage;
    struct _retain_ptr<CGColor *, geo::_retain_cf<CGColor *>, geo::_release_cf, geo::_hash_cf, geo::_equal_cf> { void /* function */ **_vptr$_retain_ptr; struct CGColor *_obj; struct _retain_cf<CGColor *> { } _retain; struct _release_cf { } _release; } _fillColor;
    struct _retain_ptr<CGColor *, geo::_retain_cf<CGColor *>, geo::_release_cf, geo::_hash_cf, geo::_equal_cf> { void /* function */ **_vptr$_retain_ptr; struct CGColor *_obj; struct _retain_cf<CGColor *> { } _retain; struct _release_cf { } _release; } _haloColor;
    struct _retain_ptr<CGColor *, geo::_retain_cf<CGColor *>, geo::_release_cf, geo::_hash_cf, geo::_equal_cf> { void /* function */ **_vptr$_retain_ptr; struct CGColor *_obj; struct _retain_cf<CGColor *> { } _retain; struct _release_cf { } _release; } _glyphColor;
    struct _retain_ptr<CGColor *, geo::_retain_cf<CGColor *>, geo::_release_cf, geo::_hash_cf, geo::_equal_cf> { void /* function */ **_vptr$_retain_ptr; struct CGColor *_obj; struct _retain_cf<CGColor *> { } _retain; struct _release_cf { } _release; } _calloutFillColor;
    struct _retain_ptr<CGColor *, geo::_retain_cf<CGColor *>, geo::_release_cf, geo::_hash_cf, geo::_equal_cf> { void /* function */ **_vptr$_retain_ptr; struct CGColor *_obj; struct _retain_cf<CGColor *> { } _retain; struct _release_cf { } _release; } _calloutHaloColor;
    struct _retain_ptr<CGColor *, geo::_retain_cf<CGColor *>, geo::_release_cf, geo::_hash_cf, geo::_equal_cf> { void /* function */ **_vptr$_retain_ptr; struct CGColor *_obj; struct _retain_cf<CGColor *> { } _retain; struct _release_cf { } _release; } _calloutTextColor;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (struct CGImage { } *)image;
- (id)init:(struct shared_ptr<grl::IconImage> { struct IconImage *x0; struct __shared_weak_count *x1; })a0;
- (struct CGColor { } *)fillColor;
- (struct CGSize { double x0; double x1; })imageSize;
- (float)opacity;
- (float)contentScale;
- (struct CGColor { } *)haloColor;
- (struct CGColor { } *)glyphColor;
- (struct CGColor { } *)calloutHaloColor;
- (struct CGColor { } *)calloutFillColor;
- (struct CGColor { } *)calloutTextColor;
- (unsigned int)calloutShape;
- (BOOL)isBalloonShape;

@end
