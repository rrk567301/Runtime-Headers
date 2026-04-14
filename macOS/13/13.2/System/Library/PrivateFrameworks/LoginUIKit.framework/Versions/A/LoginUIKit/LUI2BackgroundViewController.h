@class CAGradientLayer, DPRemoteDesktopPicture, NSImage, CALayer, NSObject;
@protocol OS_dispatch_semaphore;

@interface LUI2BackgroundViewController : LUI2ViewController

@property (retain) CALayer *imageLayer;
@property (retain) CALayer *darkenSourceOver;
@property (retain) CALayer *lightenSourceOver;
@property (retain) CAGradientLayer *gradient;
@property BOOL useDesktopLayer;
@property (retain) DPRemoteDesktopPicture *remoteDesktopPicture;
@property (retain) NSObject<OS_dispatch_semaphore> *remoteDesktopPictureSemaphore;
@property (retain) NSImage *image;
@property BOOL usesDesktopLayer;
@property id target;
@property SEL action;

- (void)dealloc;
- (id)_backgroundColor;
- (void)mouseUp:(id)a0;
- (void)viewDidLoad;
- (void)saveImage:(id)a0;
- (void)_companionPressed:(id)a0;
- (void)_displayDidChange:(id)a0;
- (void)_initImageLayer;
- (void)_darkeningLayersSetHidden:(BOOL)a0;
- (void)_updateWindow;
- (void)_configureRemoteDesktopPicture:(id)a0 fadeIn:(BOOL)a1;
- (void)_updateRemoteDesktopPicture;
- (void)_fadeInLayer:(id)a0;

@end
