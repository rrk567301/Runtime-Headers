@class AVOutputContext, AVOutputContextController, AVOutputDeviceDiscoverySessionController;

@interface AVOutputDeviceMenuController : NSObject

@property (retain) AVOutputContextController *outputContextController;
@property (retain) AVOutputDeviceDiscoverySessionController *outputDeviceDiscoverySessionController;
@property char menuIsShown;
@property (readonly) AVOutputContext *outputContext;
@property (readonly, getter=isExternalOutputDeviceAvailable) char externalOutputDeviceAvailable;
@property (readonly, getter=isExternalOutputDevicePicked) char externalOutputDevicePicked;

+ (id)keyPathsForValuesAffectingExternalOutputDeviceAvailable;
+ (id)keyPathsForValuesAffectingExternalOutputDevicePicked;
+ (id)keyPathsForValuesAffectingOutputContext;

- (id)init;
- (void).cxx_destruct;
- (id)initWithOutputContext:(id)a0;
- (char)showMenuForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 appearanceName:(id)a1 allowReselectionOfSelectedOutputDevice:(char)a2;

@end
