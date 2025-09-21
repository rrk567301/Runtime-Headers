@class NSView;

@interface NSViewBuffer : NSObject {
    char _isValid;
    NSView *_view;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _viewRect;
}

- (char)isValid;
- (void)invalidate;
- (char)restore;
- (char)cacheRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithView:(id)a0;
- (void)validate;

@end
