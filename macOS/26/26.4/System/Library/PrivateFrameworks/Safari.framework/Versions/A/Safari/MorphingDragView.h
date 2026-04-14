@class NSView, NSMapTable;

@interface MorphingDragView : NSView {
    NSMapTable *_disappearingViewsToRemovalIdentifiers;
}

@property (retain, nonatomic) NSView *contentView;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)_addAnimationWithKeyPath:(id)a0 fromValue:(id)a1 toValue:(id)a2 toLayer:(id)a3;
- (void)_commonMorphingDragViewInit;
- (void)setContentView:(id)a0 animated:(BOOL)a1;

@end
