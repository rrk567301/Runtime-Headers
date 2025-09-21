@class NSDictionary, NSString, NSImage;

@interface EKUITextButton : NSButton

@property (retain) NSDictionary *textAttributes;
@property (retain) NSString *text;
@property (retain) NSImage *originalImage;

+ (Class)cellClass;

- (id)init;
- (void).cxx_destruct;
- (char)acceptsFirstResponder;
- (char)allowsVibrancy;
- (char)becomeFirstResponder;
- (char)canBecomeKeyView;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (char)resignFirstResponder;
- (void)setTitle:(id)a0 withAttributes:(id)a1;

@end
