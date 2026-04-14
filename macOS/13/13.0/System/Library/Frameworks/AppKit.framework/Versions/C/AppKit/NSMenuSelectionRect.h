@class NSCocoaMenuImpl, NSVisualEffectView;

@interface NSMenuSelectionRect : NSObject {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _frame;
    BOOL _isHidden;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _cachedFrame;
    BOOL _cachedIsHidden;
    BOOL _shouldCommitChanges;
    NSCocoaMenuImpl *_observer;
    NSVisualEffectView *_backingView;
}

- (id)init;
- (BOOL)isHidden;
- (void)setHidden:(BOOL)a0;
- (void).cxx_destruct;
- (void)setObserver:(id)a0;
- (void)beginTransaction;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)observer;
- (id)backingView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameAsCGRect;
- (void)_notifyObserver;
- (void)setBackingView:(id)a0;
- (void)commitTransaction;

@end
