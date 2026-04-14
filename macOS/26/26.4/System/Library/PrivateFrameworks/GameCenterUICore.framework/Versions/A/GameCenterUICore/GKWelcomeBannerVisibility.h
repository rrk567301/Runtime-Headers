@class NSWindow;

@interface GKWelcomeBannerVisibility : NSObject

@property (weak, nonatomic) NSWindow *mainWindow;
@property (nonatomic) BOOL isShowingRemoteUI;
@property (nonatomic) BOOL canShowBanner;

+ (id)shared;

- (void)windowDidMiniaturize:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)applicationDidHide:(id)a0;

@end
