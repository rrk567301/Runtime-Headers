@class NSDictionary, NSString, NSImage;

@interface EKUITextButton : NSButton

@property (retain) NSDictionary *textAttributes;
@property (retain) NSString *text;
@property (retain) NSImage *originalImage;

+ (Class)cellClass;

- (BOOL)resignFirstResponder;
- (id)init;
- (BOOL)canBecomeKeyView;
- (BOOL)becomeFirstResponder;
- (BOOL)acceptsFirstResponder;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (BOOL)allowsVibrancy;
- (double)paddingInset;
- (void)setTitle:(id)a0 withAttributes:(id)a1;

@end
