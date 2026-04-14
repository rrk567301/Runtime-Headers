@class NSDictionary, NSString, NSImage;

@interface EKUITextButton : NSButton

@property (retain) NSDictionary *textAttributes;
@property (retain) NSString *text;
@property (retain) NSImage *originalImage;

+ (Class)cellClass;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)canBecomeKeyView;
- (void).cxx_destruct;
- (BOOL)allowsVibrancy;
- (id)init;
- (BOOL)acceptsFirstResponder;
- (double)paddingInset;
- (void)setTitle:(id)a0 withAttributes:(id)a1;

@end
