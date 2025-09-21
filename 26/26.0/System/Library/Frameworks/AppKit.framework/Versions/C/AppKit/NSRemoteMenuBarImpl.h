@class NSMenuTrackingSession;
@protocol NSMenuBarImplDelegate;

@interface NSRemoteMenuBarImpl : NSRemoteMenuImpl <NSMenuBarLifecycleProtocol>

@property (nonatomic, retain) id<NSMenuBarImplDelegate> menuBarDelegate;
@property (nonatomic, readonly) BOOL isLocalInstance;
@property (nonatomic, readonly) BOOL shouldPresentAsPullDown;
@property (nonatomic, retain) NSMenuTrackingSession *trackingSession;

+ (void)prepareForMenuBar;
+ (void)resetMenuBarReadiness;
+ (void)setupForNoMenuBar;

- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)_highlightVisibleItemAtIndex:(long long)a0 allowingDisabledItems:(BOOL)a1;
- (BOOL)_highlightVisibleItemAtIndex:(long long)a0 direction:(long long)a1 allowingDisabledItems:(BOOL)a2;
- (void)_menuItem:(id)a0 atIndex:(long long)a1 didChangeSubmenuFrom:(id)a2 to:(id)a3;
- (void)clearAsMainMenuBar;
- (id)initWithMenu:(id)a0;
- (void)layoutAllMenuBarsImmediately:(BOOL)a0;
- (void)setAsMainMenuBar;
- (void)setupMenuBar;
- (void)unhighlightItemIfNeeded;

@end
