@class NSString;

@interface NSServiceViewControllerForTouchBarItem : NSServiceViewController {
    NSString *_touchBarItemIdentifier;
    unsigned char _observingBridge : 1;
}

+ (void)initialize;
+ (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
+ (id)controllerWithTouchBarItem:(id)a0 andAppearance:(id)a1;
+ (id)describeTouchBars:(id)a0;
+ (char)hideOverlayTouchBar:(id)a0;
+ (void)showOverlayTouchBar:(id)a0 withOptions:(id)a1;
+ (void)touchBarItemViewAbsentFromViewHierarchy:(id)a0;
+ (void)touchBarProviders:(id)a0 inWindow:(id)a1 includingWindowItself:(char)a2;
+ (id)touchBarProvidersForWindow:(id)a0 includingWindowItself:(char)a1;
+ (id)touchBarsForProviders:(id)a0;
+ (id)viewServiceTouchBarControllerIdentifier:(id)a0;

- (void)dealloc;
- (void)invalidate;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (char)_isSecondary;
- (id)initWithAppearance:(id)a0;
- (void)loadView;
- (void)_didAssociateWithHostWindow;
- (unsigned long long)awakeFromRemoteView;
- (void)informRemoteViewOfNewSizes;
- (void)observeChangeToCompressionItemContainingItem:(id)a0;
- (void)prepareItemsOfBar:(id)a0;
- (char)remoteViewSizeChanged:(struct CGSize { double x0; double x1; })a0 transaction:(id)a1;

@end
