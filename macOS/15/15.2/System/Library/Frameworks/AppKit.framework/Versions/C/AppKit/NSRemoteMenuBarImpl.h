@class NSMenuTrackingSession;

@interface NSRemoteMenuBarImpl : AppKit.RemoteMenuImpl <NSMenuBarLifecycleProtocol>

@property (nonatomic, retain) void /* unknown type, empty encoding */ menuBarDelegate;
@property (nonatomic, readonly) BOOL isLocalInstance;
@property (nonatomic, readonly) BOOL shouldPresentAsPullDown;
@property (nonatomic, retain) NSMenuTrackingSession *trackingSession;

+ (void)prepareForMenuBar;
+ (void)resetMenuBarReadiness;
+ (void)setupForNoMenuBar;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)clearAsMainMenuBar;
- (id)initWithMenu:(id)a0;
- (void)layoutAllMenuBarsImmediately:(BOOL)a0;
- (void)setAsMainMenuBar;
- (void)setupMenuBar;
- (void)unhighlightItemIfNeeded;

@end
