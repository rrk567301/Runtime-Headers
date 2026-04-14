@class SearchUICollectionViewController, NSString;
@protocol SearchUICollectionViewInteractionDelegate;

@interface SearchUICollectionView : NSCollectionView <SearchUIScrollable>

@property (weak) SearchUICollectionViewController *controller;
@property (weak) id<SearchUICollectionViewInteractionDelegate> interactionDelegate;
@property (nonatomic) BOOL scrollEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)indexPathForEvent:(id)a0;
- (void)viewWillMoveToWindow:(id)a0;
- (void)mouseDown:(id)a0;
- (void)insertTab:(id)a0;
- (void)viewDidMoveToWindow;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)selectIndexPathForEvent:(id)a0;
- (void)didAddSubview:(id)a0;
- (void)updateKeyboardFocus;
- (void)layout;
- (BOOL)becomeFirstResponder;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (BOOL)canBecomeKeyView;
- (id)menuForEvent:(id)a0;
- (void).cxx_destruct;
- (void)updateSelectionAppearance;
- (void)mouseUp:(id)a0;
- (void)willOpenMenu:(id)a0 withEvent:(id)a1;
- (void)moveDown:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)tlk_updateForAppearance:(id)a0;
- (id)_scrollViewForOrthogonalScrollingSection:(long long)a0;
- (BOOL)acceptsFirstResponder;
- (void)mouseDragged:(id)a0;
- (void)viewDidChangeEffectiveAppearance;
- (void)dealloc;
- (void)keyDown:(id)a0;

@end
