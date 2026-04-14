@class NSString, NSMutableDictionary, _WTTextEffectView;

@interface WKTextAnimationManager : NSObject <_WTTextPreviewAsyncSource> {
    struct WeakPtr<WebKit::WebViewImpl, WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>> { struct RefPtr<WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>, WTF::DefaultRefDerefTraits<WTF::DefaultWeakPtrImpl>> { struct DefaultWeakPtrImpl *m_ptr; } m_impl; } _webView;
    struct RetainPtr<NSMutableDictionary<NSUUID *,WKTextAnimationTypeEffectData *>> { NSMutableDictionary *m_ptr; } _chunkToEffect;
    struct RetainPtr<_WTTextEffectView> { _WTTextEffectView *m_ptr; } _effectView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeTextAnimationForAnimationID:(id)a0;
- (void)addTextAnimationForAnimationID:(id)a0 withData:(const void *)a1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)textPreviewForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 completion:(id /* block */)a1;
- (void)textPreviewsForChunk:(id)a0 completion:(id /* block */)a1;
- (void)updateIsTextVisible:(BOOL)a0 forChunk:(id)a1 completion:(id /* block */)a2;
- (BOOL)hasActiveTextAnimationType;
- (void)hideTextAnimationView;
- (id)initWithWebViewImpl:(void *)a0;
- (void)restoreTextAnimationType;
- (void)suppressTextAnimationType;

@end
