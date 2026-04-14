@class NSColor, NSString;

@interface NSTouchBarColorPickerFavoriteItem : NSCollectionViewItem <NSGestureRecognizerDelegate>

@property (copy) id /* block */ selectionHandler;
@property (copy) NSColor *displayedColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (void)loadView;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)setHighlighted:(BOOL)a0;
- (void)prepareForReuse;
- (void)dealloc;
- (BOOL)_viewControllerSupports10_10Features;
- (void)pressItem:(id)a0;

@end
