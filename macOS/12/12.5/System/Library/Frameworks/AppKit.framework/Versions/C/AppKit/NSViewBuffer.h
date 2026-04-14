@class NSView;

@interface NSViewBuffer : NSObject {
    BOOL _isValid;
    NSView *_view;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _viewRect;
}

- (void)invalidate;
- (BOOL)isValid;
- (void)validate;
- (id)initWithView:(id)a0;
- (BOOL)cacheRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)restore;

@end
