@class NSString, NSView;

@interface WKImmediateActionController : NSObject <QLPreviewMenuItemDelegate, NSImmediateActionGestureRecognizerDelegate> {
    struct CheckedPtr<WebKit::WebPageProxy, WTF::RawPtrTraits<WebKit::WebPageProxy>> { struct WebPageProxy *m_ptr; } _page;
    NSView *_view;
    struct CheckedPtr<WebKit::WebViewImpl, WTF::RawPtrTraits<WebKit::WebViewImpl>> { struct WebViewImpl *m_ptr; } _viewImpl;
    int _state;
    struct WebHitTestResultData { struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl *m_ptr; } m_impl; } absoluteImageURL; struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl *m_ptr; } m_impl; } absolutePDFURL; struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl *m_ptr; } m_impl; } absoluteLinkURL; struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl *m_ptr; } m_impl; } absoluteMediaURL; struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl *m_ptr; } m_impl; } linkLabel; struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl *m_ptr; } m_impl; } linkTitle; struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl *m_ptr; } m_impl; } linkSuggestedFilename; BOOL isContentEditable; struct IntRect { struct IntPoint { int m_x; int m_y; } m_location; struct IntSize { int m_width; int m_height; } m_size; } elementBoundingBox; unsigned char isScrollbar; BOOL isSelected; BOOL isTextNode; BOOL isOverTextInsideFormControlElement; BOOL isDownloadableMedia; struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl *m_ptr; } m_impl; } lookupText; struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl *m_ptr; } m_impl; } toolTipText; struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl *m_ptr; } m_impl; } imageText; struct RefPtr<WebKit::SharedMemory, WTF::RawPtrTraits<WebKit::SharedMemory>, WTF::DefaultRefDerefTraits<WebKit::SharedMemory>> { struct SharedMemory *m_ptr; } imageSharedMemory; struct RefPtr<WebKit::ShareableBitmap, WTF::RawPtrTraits<WebKit::ShareableBitmap>, WTF::DefaultRefDerefTraits<WebKit::ShareableBitmap>> { struct ShareableBitmap *m_ptr; } imageBitmap; struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl *m_ptr; } m_impl; } sourceImageMIMEType; struct WebHitTestResultPlatformData { struct Markable<WebKit::WebHitTestResultPlatformData::DetectedDataActionContext, WebKit::WebHitTestResultPlatformData::DetectedDataActionContext::MarkableTraits> { struct DetectedDataActionContext { struct RetainPtr<DDSecureActionContext> { void *m_ptr; } context; } m_value; } detectedDataActionContext; struct FloatRect { struct FloatPoint { float m_x; float m_y; } m_location; struct FloatSize { float m_width; float m_height; } m_size; } detectedDataBoundingBox; struct RefPtr<WebCore::TextIndicator, WTF::RawPtrTraits<WebCore::TextIndicator>, WTF::DefaultRefDerefTraits<WebCore::TextIndicator>> { struct TextIndicator *m_ptr; } detectedDataTextIndicator; unsigned long long detectedDataOriginatingPageOverlay; } platformData; struct DictionaryPopupInfo { struct FloatPoint { float m_x; float m_y; } origin; struct TextIndicatorData { struct FloatRect { struct FloatPoint { float m_x; float m_y; } m_location; struct FloatSize { float m_width; float m_height; } m_size; } selectionRectInRootViewCoordinates; struct FloatRect { struct FloatPoint { float m_x; float m_y; } m_location; struct FloatSize { float m_width; float m_height; } m_size; } textBoundingRectInRootViewCoordinates; struct FloatRect { struct FloatPoint { float m_x; float m_y; } m_location; struct FloatSize { float m_width; float m_height; } m_size; } contentImageWithoutSelectionRectInRootViewCoordinates; struct Vector<WebCore::FloatRect, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> { struct FloatRect *m_buffer; unsigned int m_capacity; unsigned int m_size; } textRectsInBoundingRectCoordinates; float contentImageScaleFactor; struct RefPtr<WebCore::Image, WTF::RawPtrTraits<WebCore::Image>, WTF::DefaultRefDerefTraits<WebCore::Image>> { struct Image *m_ptr; } contentImageWithHighlight; struct RefPtr<WebCore::Image, WTF::RawPtrTraits<WebCore::Image>, WTF::DefaultRefDerefTraits<WebCore::Image>> { struct Image *m_ptr; } contentImageWithoutSelection; struct RefPtr<WebCore::Image, WTF::RawPtrTraits<WebCore::Image>, WTF::DefaultRefDerefTraits<WebCore::Image>> { struct Image *m_ptr; } contentImage; struct Color { unsigned long long m_colorAndFlags; } estimatedBackgroundColor; unsigned char presentationTransition; struct OptionSet<WebCore::TextIndicatorOption> { unsigned short m_storage; } options; } textIndicator; struct DictionaryPopupInfoCocoa { struct RetainPtr<NSDictionary> { void *m_ptr; } options; struct AttributedString { struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl *m_ptr; } m_impl; } string; struct Vector<std::pair<WebCore::AttributedString::Range, WTF::HashMap<WTF::String, WebCore::AttributedString::AttributeValue>>, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> { void *m_buffer; unsigned int m_capacity; unsigned int m_size; } attributes; struct optional<WTF::HashMap<WTF::String, WebCore::AttributedString::AttributeValue>> { union { char __null_state_; struct HashMap<WTF::String, WebCore::AttributedString::AttributeValue, WTF::DefaultHash<String>, WTF::HashTraits<String>, WTF::HashTraits<WebCore::AttributedString::AttributeValue>, WTF::HashTableTraits> { struct HashTable<WTF::String, WTF::KeyValuePair<WTF::String, WebCore::AttributedString::AttributeValue>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WTF::String, WebCore::AttributedString::AttributeValue>>, WTF::DefaultHash<String>, WTF::HashMap<WTF::String, WebCore::AttributedString::AttributeValue>::KeyValuePairTraits, WTF::HashTraits<String>> { union { void *m_table; unsigned int *m_tableForLLDB; } ; } m_impl; } __val_; } ; BOOL __engaged_; } documentAttributes; } attributedString; } platformData; } dictionaryPopupInfo; struct RefPtr<WebCore::TextIndicator, WTF::RawPtrTraits<WebCore::TextIndicator>, WTF::DefaultRefDerefTraits<WebCore::TextIndicator>> { struct TextIndicator *m_ptr; } linkTextIndicator; } _hitTestResultData;
    BOOL _contentPreventsDefault;
    struct RefPtr<API::Object, WTF::RawPtrTraits<API::Object>, WTF::DefaultRefDerefTraits<API::Object>> { struct Object *m_ptr; } _userData;
    unsigned int _type;
    struct RetainPtr<NSImmediateActionGestureRecognizer> { void *m_ptr; } _immediateActionRecognizer;
    BOOL _hasActivatedActionContext;
    struct RetainPtr<DDSecureActionContext> { void *m_ptr; } _currentActionContext;
    struct RetainPtr<QLPreviewMenuItem> { void *m_ptr; } _currentQLPreviewMenuItem;
    BOOL _hasActiveImmediateAction;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id).cxx_construct;
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
- (id)_defaultAnimationController;
- (id)_animationControllerForDataDetectedText;
- (id)_animationControllerForText;
- (void)_cancelImmediateAction;
- (void)_clearImmediateActionState;
- (void)_updateImmediateActionItem;
- (void)_cancelImmediateActionIfNeeded;
- (struct RefPtr<API::HitTestResult, WTF::RawPtrTraits<API::HitTestResult>, WTF::DefaultRefDerefTraits<API::HitTestResult>> { struct HitTestResult *x0; })_webHitTestResult;
- (void)didPerformImmediateActionHitTest:(const void *)a0 contentPreventsDefault:(BOOL)a1 userData:(struct Object { void /* function */ **x0; void *x1; } *)a2;
- (void)dismissContentRelativeChildWindows;
- (BOOL)hasActiveImmediateAction;
- (id)initWithPage:(struct NakedRef<WebKit::WebPageProxy> { struct WebPageProxy *x0; })a0 view:(id)a1 viewImpl:(struct NakedRef<WebKit::WebViewImpl> { struct WebViewImpl *x0; })a2 recognizer:(id)a3;
- (void)willDestroyView:(id)a0;

@end
