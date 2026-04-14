@class NotificationListener;

@interface NotificationWindowController : NSWindowController

@property (nonatomic, readonly) BOOL windowLoaded;
@property (retain, nonatomic) NotificationListener *listener;
@property (nonatomic) BOOL windowIsActuallyLoaded;

- (void)windowDidLoad;
- (void)loadWindow;
- (void).cxx_destruct;
- (BOOL)isWindowLoaded;

@end
