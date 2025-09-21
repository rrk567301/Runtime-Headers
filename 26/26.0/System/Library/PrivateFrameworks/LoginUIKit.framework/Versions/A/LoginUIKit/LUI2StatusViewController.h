@class LUI2TimeViewController, LUI2WiFiViewController, LUI2InfoStatusViewController, NSStackView, LUI2UserMenuViewController, LUI2BatteryViewController, LUI2SafeBootViewController, LUI2PowerViewController, LUI2ScreenSharingViewController, LUI2InputMethodViewController, LUI2NetworkStatusViewController;

@interface LUI2StatusViewController : LUI2ViewController

@property (retain) NSStackView *stackView;
@property (readonly) LUI2BatteryViewController *batteryViewController;
@property (readonly) LUI2InputMethodViewController *inputMethodViewController;
@property (readonly) LUI2InfoStatusViewController *infoStatusViewController;
@property (readonly) LUI2NetworkStatusViewController *networkStatusViewController;
@property (readonly) LUI2PowerViewController *powerViewController;
@property (readonly) LUI2SafeBootViewController *safeBootViewController;
@property (readonly) LUI2ScreenSharingViewController *screenSharingViewController;
@property (readonly) LUI2TimeViewController *timeViewController;
@property (readonly) LUI2UserMenuViewController *userViewController;
@property (readonly) LUI2WiFiViewController *wifiViewController;

- (void)pause;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (void)setEnabled:(BOOL)a0;
- (void)resume;
- (void).cxx_destruct;

@end
