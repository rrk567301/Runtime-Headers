@class ICDevice;
@protocol IKDeviceBrowserViewDelegate;

@interface IKDeviceBrowserView : NSView {
    id _privateData;
}

@property char isInitialized;
@property char displaysAccessoryView;
@property id<IKDeviceBrowserViewDelegate> delegate;
@property char displaysLocalCameras;
@property char displaysNetworkCameras;
@property char displaysLocalScanners;
@property char displaysNetworkScanners;
@property long long mode;
@property (readonly) ICDevice *selectedDevice;

+ (char)isCompatibleWithResponsiveScrolling;

- (void)dealloc;
- (void)finalize;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)valueForUndefinedKey:(id)a0;
- (void)awakeFromNib;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewDidMoveToWindow;
- (void)setSelectedDevice:(id)a0;
- (void)commonInit:(id)a0;
- (id)deviceBrowser;
- (void)drawRect_ib:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)installView:(id)a0;
- (id)resizeView;
- (void)setHidesAccessoryView:(char)a0;
- (void)setHidesExtrasContainer:(char)a0;
- (void)setHidesResizeView:(char)a0;
- (id)takeoverICDeviceBrowser;

@end
