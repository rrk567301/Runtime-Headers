@class NotificationListener;

@interface NotificationWindowController : NSWindowController

@property (nonatomic, readonly) char windowLoaded;
@property (retain, nonatomic) NotificationListener *listener;
@property (nonatomic) char windowIsActuallyLoaded;

- (void).cxx_destruct;
- (char)isWindowLoaded;
- (void)loadWindow;
- (void)windowDidLoad;

@end
