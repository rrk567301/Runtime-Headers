@class NSString, NSDictionary;
@protocol CalUIResizingTextFieldDelegate;

@interface CalUIResizingTextField : NSTextField <NSTextFieldDelegate, NSTextViewDelegate>

@property (nonatomic) BOOL automaticLinkDetection;
@property (nonatomic) BOOL alwaysTreatAsLink;
@property BOOL resizingEnabled;
@property (retain) NSString *defaultLinkString;
@property (retain) NSDictionary *textAttributes;
@property (weak, nonatomic) id<CalUIResizingTextFieldDelegate> calDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)cellClass;

- (void)dealloc;
- (id)init;
- (void)setDelegate:(id)a0;
- (void).cxx_destruct;
- (void)setStringValue:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (BOOL)copy:(id)a0;
- (BOOL)control:(id)a0 textView:(id)a1 doCommandBySelector:(SEL)a2;
- (void)textDidChange:(id)a0;
- (void)textDidEndEditing:(id)a0;
- (BOOL)textView:(id)a0 clickedOnLink:(id)a1 atIndex:(unsigned long long)a2;
- (void)scrollToTop;
- (BOOL)readPasteboard:(id)a0;
- (void)enableEntireFieldTreatedAsLink;
- (void)setAttributedStringValueWithString:(id)a0 andURLString:(id)a1;
- (id)initWithResizeEnabled:(BOOL)a0;
- (void)updatePreferredMaxLayoutWidth:(id)a0;
- (void)configureText;
- (void)_configureForLinks;
- (void)updateStringValue:(id)a0;
- (id)clearIsolatesFromString:(id)a0;
- (void)makeCursorVisibleInTextView:(id)a0 forScrollView:(id)a1;
- (void)_scrollToTopTextView:(id)a0;
- (void)enableAutomaticLinkDetection;
- (void)setFieldEditorAllowsVibrancy:(BOOL)a0;

@end
