@class NSString, NSMutableDictionary;

@interface ABLargeTypeView : NSView {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _windowRect;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _textRect;
    NSString *_string;
    NSMutableDictionary *_attributes;
}

- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)becomeFirstResponder;
- (BOOL)acceptsFirstResponder;
- (void).cxx_destruct;
- (void)mouseDown:(id)a0;
- (id)initWithString:(id)a0 onScreen:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })windowRect;

@end
