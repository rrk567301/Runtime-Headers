@class NSString, WebView;

@interface WebImmediateActionController : NSObject <QLPreviewMenuItemDelegate, NSImmediateActionGestureRecognizerDelegate> {
    WebView *_webView;
    int _type;
    struct HitTestResult { struct HitTestLocation { struct LayoutPoint { struct LayoutUnit { int m_value; } m_x; struct LayoutUnit { int m_value; } m_y; } m_point; struct LayoutRect { struct LayoutPoint { struct LayoutUnit { int m_value; } m_x; struct LayoutUnit { int m_value; } m_y; } m_location; struct LayoutSize { struct LayoutUnit { int m_value; } m_width; struct LayoutUnit { int m_value; } m_height; } m_size; } m_boundingBox; struct FloatPoint { float m_x; float m_y; } m_transformedPoint; struct FloatQuad { struct FloatPoint { float m_x; float m_y; } m_p1; struct FloatPoint { float m_x; float m_y; } m_p2; struct FloatPoint { float m_x; float m_y; } m_p3; struct FloatPoint { float m_x; float m_y; } m_p4; } m_transformedRect; BOOL m_isRectBased; BOOL m_isRectilinear; } m_hitTestLocation; struct RefPtr<WebCore::Node, WTF::RawPtrTraits<WebCore::Node>, WTF::DefaultRefDerefTraits<WebCore::Node>> { struct Node *m_ptr; } m_innerNode; struct RefPtr<WebCore::Node, WTF::RawPtrTraits<WebCore::Node>, WTF::DefaultRefDerefTraits<WebCore::Node>> { struct Node *m_ptr; } m_innerNonSharedNode; struct LayoutPoint { struct LayoutUnit { int m_value; } m_x; struct LayoutUnit { int m_value; } m_y; } m_pointInInnerNodeFrame; struct LayoutPoint { struct LayoutUnit { int m_value; } m_x; struct LayoutUnit { int m_value; } m_y; } m_localPoint; struct RefPtr<WebCore::Element, WTF::RawPtrTraits<WebCore::Element>, WTF::DefaultRefDerefTraits<WebCore::Element>> { struct Element *m_ptr; } m_innerURLElement; struct RefPtr<WebCore::Scrollbar, WTF::RawPtrTraits<WebCore::Scrollbar>, WTF::DefaultRefDerefTraits<WebCore::Scrollbar>> { struct Scrollbar *m_ptr; } m_scrollbar; BOOL m_isOverWidget; struct unique_ptr<WTF::ListHashSet<WTF::Ref<WebCore::Node>>, std::default_delete<WTF::ListHashSet<WTF::Ref<WebCore::Node>>>> { struct __compressed_pair<WTF::ListHashSet<WTF::Ref<WebCore::Node>> *, std::default_delete<WTF::ListHashSet<WTF::Ref<WebCore::Node>>>> { void *__value_; } __ptr_; } m_listBasedTestResult; } _hitTestResult;
    struct RetainPtr<NSImmediateActionGestureRecognizer> { void *m_ptr; } _immediateActionRecognizer;
    struct RetainPtr<QLPreviewMenuItem> { void *m_ptr; } _currentQLPreviewMenuItem;
    struct RetainPtr<DDActionContext> { void *m_ptr; } _currentActionContext;
    BOOL _hasActivatedActionContext;
    BOOL _contentPreventsDefault;
}

@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct DictionaryPopupInfo { struct FloatPoint { float x0; float x1; } x0; struct TextIndicatorData { struct FloatRect { struct FloatPoint { float x0; float x1; } x0; struct FloatSize { float x0; float x1; } x1; } x0; struct FloatRect { struct FloatPoint { float x0; float x1; } x0; struct FloatSize { float x0; float x1; } x1; } x1; struct FloatRect { struct FloatPoint { float x0; float x1; } x0; struct FloatSize { float x0; float x1; } x1; } x2; struct Vector<WebCore::FloatRect, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> { struct FloatRect *x0; unsigned int x1; unsigned int x2; } x3; float x4; struct RefPtr<WebCore::Image, WTF::RawPtrTraits<WebCore::Image>, WTF::DefaultRefDerefTraits<WebCore::Image>> { struct Image *x0; } x5; struct RefPtr<WebCore::Image, WTF::RawPtrTraits<WebCore::Image>, WTF::DefaultRefDerefTraits<WebCore::Image>> { struct Image *x0; } x6; struct RefPtr<WebCore::Image, WTF::RawPtrTraits<WebCore::Image>, WTF::DefaultRefDerefTraits<WebCore::Image>> { struct Image *x0; } x7; struct Color { unsigned long long x0; } x8; unsigned char x9; struct OptionSet<WebCore::TextIndicatorOption> { unsigned short x0; } x10; } x1; struct RetainPtr<NSDictionary> { void *x0; } x2; struct RetainPtr<NSAttributedString> { void *x0; } x3; })_dictionaryPopupInfoForRange:(const void *)a0 inFrame:(void *)a1 withLookupOptions:(id)a2 indicatorOptions:(struct OptionSet<WebCore::TextIndicatorOption> { unsigned short x0; })a3 transition:(unsigned char)a4;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)menuItem:(id)a0 viewAtScreenPoint:(struct CGPoint { double x0; double x1; })a1;
- (id)menuItem:(id)a0 previewItemAtPoint:(struct CGPoint { double x0; double x1; })a1;
- (unsigned long long)menuItem:(id)a0 preferredEdgeForPoint:(struct CGPoint { double x0; double x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })menuItem:(id)a0 itemFrameForPoint:(struct CGPoint { double x0; double x1; })a1;
- (struct CGSize { double x0; double x1; })menuItem:(id)a0 maxSizeForPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)menuItemDidClose:(id)a0;
- (void)immediateActionRecognizerWillPrepare:(id)a0;
- (void)immediateActionRecognizerWillBeginAnimation:(id)a0;
- (void)immediateActionRecognizerDidUpdateAnimation:(id)a0;
- (void)immediateActionRecognizerDidCancelAnimation:(id)a0;
- (void)immediateActionRecognizerDidCompleteAnimation:(id)a0;
- (id)initWithWebView:(id)a0 recognizer:(id)a1;
- (void)webViewClosed;
- (void)webView:(id)a0 didHandleScrollWheel:(id)a1;
- (id)immediateActionRecognizer;
- (void)_cancelImmediateAction;
- (void)_clearImmediateActionState;
- (void)performHitTestAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)_defaultAnimationController;
- (void)_updateImmediateActionItem;
- (id)_animationControllerForDataDetectedText;
- (id)_animationControllerForDataDetectedLink;
- (id)_animationControllerForText;

@end
