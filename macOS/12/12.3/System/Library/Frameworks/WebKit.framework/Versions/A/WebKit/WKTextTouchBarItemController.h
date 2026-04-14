@class NSColor, NSString;

@interface WKTextTouchBarItemController : NSTextTouchBarItemController <NSCandidateListTouchBarItemDelegate, NSTouchBarDelegate> {
    struct RetainPtr<NSColor> { void *m_ptr; } _textColor;
    struct RetainPtr<WKTextListTouchBarViewController> { void *m_ptr; } _textListTouchBarViewController;
    void *_webViewImpl;
}

@property (nonatomic) BOOL textIsBold;
@property (nonatomic) BOOL textIsItalic;
@property (nonatomic) BOOL textIsUnderlined;
@property (nonatomic) long long currentTextAlignment;
@property (retain, nonatomic) NSColor *textColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)itemForIdentifier:(id)a0;
- (id)touchBar:(id)a0 makeItemForIdentifier:(id)a1;
- (void)candidateListTouchBarItem:(id)a0 endSelectingCandidateAtIndex:(long long)a1;
- (void)candidateListTouchBarItem:(id)a0 changedCandidateListVisibility:(BOOL)a1;
- (id)textListViewController;
- (void)touchBarDidExitCustomization:(id)a0;
- (void)touchBarWillEnterCustomization:(id)a0;
- (void)didChangeAutomaticTextCompletion:(id)a0;
- (id)initWithWebViewImpl:(void *)a0;
- (void)didDestroyView;
- (void)_wkChangeTextStyle:(id)a0;
- (void)_wkChangeTextAlignment:(id)a0;
- (void)_wkChangeColor:(id)a0;
- (id)textListTouchBarViewController;

@end
