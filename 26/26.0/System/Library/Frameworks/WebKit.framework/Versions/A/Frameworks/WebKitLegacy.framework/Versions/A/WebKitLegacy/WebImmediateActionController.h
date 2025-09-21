@class NSString, NSImmediateActionGestureRecognizer, DDActionContext, WebView, QLPreviewMenuItem;

@interface WebImmediateActionController : NSObject <QLPreviewMenuItemDelegate, NSImmediateActionGestureRecognizerDelegate> {
    WebView *_webView;
    int _type;
    struct HitTestResult { struct HitTestLocation { struct LayoutPoint { struct LayoutUnit { int m_value; } m_x; struct LayoutUnit { int m_value; } m_y; } m_point; struct LayoutRect { struct LayoutPoint { struct LayoutUnit { int m_value; } m_x; struct LayoutUnit { int m_value; } m_y; } m_location; struct LayoutSize { struct LayoutUnit { int m_value; } m_width; struct LayoutUnit { int m_value; } m_height; } m_size; } m_boundingBox; struct FloatPoint { float m_x; float m_y; } m_transformedPoint; struct FloatQuad { struct FloatPoint { float m_x; float m_y; } m_p1; struct FloatPoint { float m_x; float m_y; } m_p2; struct FloatPoint { float m_x; float m_y; } m_p3; struct FloatPoint { float m_x; float m_y; } m_p4; } m_transformedRect; BOOL m_isRectBased; BOOL m_isRectilinear; } m_hitTestLocation; struct RefPtr<WebCore::Node, WTF::RawPtrTraits<WebCore::Node>, WTF::DefaultRefDerefTraits<WebCore::Node>> { struct Node *m_ptr; } m_innerNode; struct RefPtr<WebCore::Node, WTF::RawPtrTraits<WebCore::Node>, WTF::DefaultRefDerefTraits<WebCore::Node>> { struct Node *m_ptr; } m_innerNonSharedNode; struct LayoutPoint { struct LayoutUnit { int m_value; } m_x; struct LayoutUnit { int m_value; } m_y; } m_pointInInnerNodeFrame; struct LayoutPoint { struct LayoutUnit { int m_value; } m_x; struct LayoutUnit { int m_value; } m_y; } m_localPoint; struct RefPtr<WebCore::Element, WTF::RawPtrTraits<WebCore::Element>, WTF::DefaultRefDerefTraits<WebCore::Element>> { struct Element *m_ptr; } m_innerURLElement; struct RefPtr<WebCore::Scrollbar, WTF::RawPtrTraits<WebCore::Scrollbar>, WTF::DefaultRefDerefTraits<WebCore::Scrollbar>> { struct Scrollbar *m_ptr; } m_scrollbar; BOOL m_isOverWidget; struct unique_ptr<WTF::ListHashSet<WTF::Ref<WebCore::Node>>, std::default_delete<WTF::ListHashSet<WTF::Ref<WebCore::Node>>>> { void *__ptr_; } m_listBasedTestResult; } _hitTestResult;
    struct RetainPtr<NSImmediateActionGestureRecognizer> { NSImmediateActionGestureRecognizer *m_ptr; } _immediateActionRecognizer;
    struct RetainPtr<QLPreviewMenuItem> { QLPreviewMenuItem *m_ptr; } _currentQLPreviewMenuItem;
    struct RetainPtr<DDActionContext> { DDActionContext *m_ptr; } _currentActionContext;
    BOOL _hasActivatedActionContext;
    BOOL _contentPreventsDefault;
}

@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct DictionaryPopupInfo { struct FloatPoint { float x0; float x1; } x0; struct RefPtr<WebCore::TextIndicator, WTF::RawPtrTraits<WebCore::TextIndicator>, WTF::DefaultRefDerefTraits<WebCore::TextIndicator>> { struct TextIndicator *x0; } x1; struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl *x0; } x0; } x2; })_dictionaryPopupInfoForRange:(const void *)a0 inFrame:(void *)a1 indicatorOptions:(struct OptionSet<WebCore::TextIndicatorOption> { unsigned short x0; })a2 transition:(unsigned char)a3;

- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long long)menuItem:(id)a0 preferredEdgeForPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)immediateActionRecognizerDidCancelAnimation:(id)a0;
- (void)immediateActionRecognizerDidCompleteAnimation:(id)a0;
- (void)immediateActionRecognizerDidUpdateAnimation:(id)a0;
- (void)immediateActionRecognizerWillBeginAnimation:(id)a0;
- (void)immediateActionRecognizerWillPrepare:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })menuItem:(id)a0 itemFrameForPoint:(struct CGPoint { double x0; double x1; })a1;
- (struct CGSize { double x0; double x1; })menuItem:(id)a0 maxSizeForPoint:(struct CGPoint { double x0; double x1; })a1;
- (id)menuItem:(id)a0 previewItemAtPoint:(struct CGPoint { double x0; double x1; })a1;
- (id)menuItem:(id)a0 viewAtScreenPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)menuItemDidClose:(id)a0;
- (id)_animationControllerForDataDetectedLink;
- (void)_cancelImmediateAction;
- (void)_clearImmediateActionState;
- (id)_defaultAnimationController;
- (id)_animationControllerForDataDetectedText;
- (id)_animationControllerForText;
- (void)_updateImmediateActionItem;
- (id)immediateActionRecognizer;
- (id)initWithWebView:(id)a0 recognizer:(id)a1;
- (void)performHitTestAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)webView:(id)a0 didHandleScrollWheel:(id)a1;
- (void)webViewClosed;

@end
