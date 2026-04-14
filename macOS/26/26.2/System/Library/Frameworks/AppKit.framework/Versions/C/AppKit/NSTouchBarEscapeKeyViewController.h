@class NSTouchBarItem, NSTouchBarEscapeKeyView;

@interface NSTouchBarEscapeKeyViewController : NSViewController {
    NSTouchBarItem *_touchBarItem;
}

@property (retain) NSTouchBarItem *touchBarItem;
@property (retain) NSTouchBarEscapeKeyView *view;
@property (readonly) struct CGSize { double x0; double x1; } preferredSize;

+ (id)keyPathsForValuesAffectingPreferredSize;

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (void)refreshSubviews;
- (void)_noteTouchBarItemViewChanged;
- (BOOL)_viewControllerSupports10_10Features;

@end
