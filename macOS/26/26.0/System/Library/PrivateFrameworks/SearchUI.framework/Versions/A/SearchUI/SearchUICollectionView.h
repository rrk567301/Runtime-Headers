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

- (void)didAddSubview:(id)a0;
- (void)mouseDown:(id)a0;
- (void)mouseUp:(id)a0;
- (void)viewWillMoveToWindow:(id)a0;
- (void)willOpenMenu:(id)a0 withEvent:(id)a1;
- (void)updateSelectionAppearance;
- (void)mouseDragged:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)keyDown:(id)a0;
- (id)indexPathForEvent:(id)a0;
- (void)layout;
- (id)selectIndexPathForEvent:(id)a0;
- (BOOL)becomeFirstResponder;
- (void)tlk_updateForAppearance:(id)a0;
- (void)insertNewline:(id)a0;
- (void)viewDidMoveToWindow;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)_scrollViewForOrthogonalScrollingSection:(long long)a0;
- (id)menuForEvent:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)viewDidChangeEffectiveAppearance;
- (void)purgeMemory;
- (void).cxx_destruct;
- (void)updateKeyboardFocus;

@end
