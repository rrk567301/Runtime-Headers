@class NSWindow;

@interface GKWelcomeBannerVisibility : NSObject

@property (weak, nonatomic) NSWindow *mainWindow;
@property (nonatomic) char isShowingRemoteUI;
@property (nonatomic) char canShowBanner;

+ (id)shared;

- (id)init;
- (void).cxx_destruct;
- (void)applicationDidHide:(id)a0;
- (void)windowDidMiniaturize:(id)a0;

@end
