@class NSString, NSDictionary, NSObject;
@protocol OS_dispatch_queue, CalUIResizingTextFieldDelegate;

@interface CalUIResizingTextField : NSTextField <NSTextFieldDelegate, NSTextViewDelegate>

@property (nonatomic) BOOL automaticLinkDetection;
@property (nonatomic) BOOL alwaysTreatAsLink;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *hyperlinkFormattingQueue;
@property BOOL resizingEnabled;
@property (copy) NSString *defaultLinkString;
@property (copy) NSDictionary *textAttributes;
@property (weak, nonatomic) id<CalUIResizingTextFieldDelegate> calDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)cellClass;

- (BOOL)control:(id)a0 textView:(id)a1 doCommandBySelector:(SEL)a2;
- (void)setStringValue:(id)a0;
- (void)textDidChange:(id)a0;
- (BOOL)copy:(id)a0;
- (void).cxx_destruct;
- (void)setDelegate:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)init;
- (void)dealloc;
- (void)setSelectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)textView:(id)a0 clickedOnLink:(id)a1 atIndex:(unsigned long long)a2;
- (id)linkColor;
- (void)textDidEndEditing:(id)a0;
- (void)scrollToTop;
- (BOOL)readPasteboard:(id)a0;
- (void)_configureForLinks;
- (void)_scrollToTopTextView:(id)a0;
- (id)clearIsolatesFromString:(id)a0;
- (void)configureText;
- (void)detectLinksInString:(id)a0 insertingIsolates:(BOOL)a1 completion:(id /* block */)a2;
- (void)enableAutomaticLinkDetection;
- (void)enableEntireFieldTreatedAsLink;
- (id)initWithResizeEnabled:(BOOL)a0;
- (void)makeCursorVisibleInTextView:(id)a0 forScrollView:(id)a1;
- (void)setAttributedStringValueIfLinksHaveChanged:(id)a0;
- (void)setAttributedStringValueWithString:(id)a0 andURL:(id)a1;
- (void)setAttributedStringValueWithString:(id)a0 andURLString:(id)a1;
- (void)setFieldEditorAllowsVibrancy:(BOOL)a0;
- (void)updateLinks;
- (void)updatePreferredMaxLayoutWidth:(id)a0;
- (void)updateStringDuringEditing:(id)a0;
- (void)updateStringValue:(id)a0;
- (void)updateStringValue:(id)a0 updateEvenIfEditing:(BOOL)a1;

@end
