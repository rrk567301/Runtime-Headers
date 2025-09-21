@class NSDictionary, NSString, NSImage;

@interface EKUITextButton : NSButton

@property (retain) NSDictionary *textAttributes;
@property (retain) NSString *text;
@property (retain) NSImage *originalImage;

+ (Class)cellClass;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (BOOL)allowsVibrancy;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (id)init;
- (void).cxx_destruct;
- (BOOL)acceptsFirstResponder;
- (BOOL)canBecomeKeyView;
- (double)paddingInset;
- (void)setTitle:(id)a0 withAttributes:(id)a1;

@end
