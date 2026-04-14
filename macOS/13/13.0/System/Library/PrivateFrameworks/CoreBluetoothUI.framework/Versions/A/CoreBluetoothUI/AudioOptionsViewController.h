@class CBClassicPeer, CBPeripheral;
@protocol AudioOptionsViewControllerAccessor;

@interface AudioOptionsViewController : NSViewController

@property CBClassicPeer *peer;
@property CBPeripheral *peripheral;
@property id<AudioOptionsViewControllerAccessor> audioOptionsViewControllerAccessor;

+ (id)viewsSupported;
+ (BOOL)peerHasViews:(id)a0;
+ (BOOL)peripheralHasViews:(id)a0;
+ (id)createViewsForPeer:(id)a0;

- (void)viewDidLoad;
- (void)loadPrefs;
- (void)handleClose;
- (id)viewsToAlign;
- (id)deviceSpecificLocalizedStringForKey:(id)a0;
- (void)addPopUpItemWithResKey:(id)a0 key:(id)a1 tag:(int)a2;

@end
