@class NSColor, NSString;

@interface NSTouchBarColorPickerFavoriteItem : NSCollectionViewItem <NSGestureRecognizerDelegate>

@property (copy) id /* block */ selectionHandler;
@property (copy) NSColor *displayedColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)prepareForReuse;
- (void)setHighlighted:(char)a0;
- (char)_viewControllerSupports10_10Features;
- (char)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (char)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)loadView;
- (void)pressItem:(id)a0;

@end
