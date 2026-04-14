@interface VKIconImage : NSObject {
    struct shared_ptr<grl::IconImage> { struct IconImage *__ptr_; struct __shared_weak_count *__cntrl_; } _iconImage;
    struct _retain_ptr<CGColor *, geo::_retain_cf<CGColor *>, geo::_release_cf, geo::_hash_cf, geo::_equal_cf> { void /* function */ **_vptr$_retain_ptr; struct CGColor *_obj; struct _retain_cf<CGColor *> { } _retain; struct _release_cf { } _release; } _fillColor;
    struct _retain_ptr<CGColor *, geo::_retain_cf<CGColor *>, geo::_release_cf, geo::_hash_cf, geo::_equal_cf> { void /* function */ **_vptr$_retain_ptr; struct CGColor *_obj; struct _retain_cf<CGColor *> { } _retain; struct _release_cf { } _release; } _haloColor;
    struct _retain_ptr<CGColor *, geo::_retain_cf<CGColor *>, geo::_release_cf, geo::_hash_cf, geo::_equal_cf> { void /* function */ **_vptr$_retain_ptr; struct CGColor *_obj; struct _retain_cf<CGColor *> { } _retain; struct _release_cf { } _release; } _glyphColor;
    struct _retain_ptr<CGColor *, geo::_retain_cf<CGColor *>, geo::_release_cf, geo::_hash_cf, geo::_equal_cf> { void /* function */ **_vptr$_retain_ptr; struct CGColor *_obj; struct _retain_cf<CGColor *> { } _retain; struct _release_cf { } _release; } _calloutFillColor;
    struct _retain_ptr<CGColor *, geo::_retain_cf<CGColor *>, geo::_release_cf, geo::_hash_cf, geo::_equal_cf> { void /* function */ **_vptr$_retain_ptr; struct CGColor *_obj; struct _retain_cf<CGColor *> { } _retain; struct _release_cf { } _release; } _calloutHaloColor;
    struct _retain_ptr<CGColor *, geo::_retain_cf<CGColor *>, geo::_release_cf, geo::_hash_cf, geo::_equal_cf> { void /* function */ **_vptr$_retain_ptr; struct CGColor *_obj; struct _retain_cf<CGColor *> { } _retain; struct _release_cf { } _release; } _calloutTextColor;
}

- (struct CGSize { double x0; double x1; })imageSize;
- (struct CGColor { } *)fillColor;
- (struct CGColor { } *)calloutFillColor;
- (struct CGColor { } *)haloColor;
- (struct CGColor { } *)calloutHaloColor;
- (struct CGColor { } *)calloutTextColor;
- (float)opacity;
- (unsigned int)calloutShape;
- (float)contentScale;
- (id)init:(struct shared_ptr<grl::IconImage> { struct IconImage *x0; struct __shared_weak_count *x1; })a0;
- (void).cxx_destruct;
- (struct CGColor { } *)glyphColor;
- (BOOL)isBalloonShape;
- (struct CGImage { } *)image;
- (id).cxx_construct;

@end
