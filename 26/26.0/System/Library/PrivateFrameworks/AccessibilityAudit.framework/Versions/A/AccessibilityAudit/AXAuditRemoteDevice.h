@class AXPHostCacheManager, NSString, DTXConnection, NSByteCountFormatter, AXPHostCacheOverlayView;
@protocol AXAuditRemoteDeviceDelegate;

@interface AXAuditRemoteDevice : NSObject <AXPTranslationTransportCancellable, AXPTranslationTransportDelegate, AXPHostCacheManagerDelegate, AXAuditRemoteDeviceAPIHost>

@property (retain, nonatomic) DTXConnection *connection;
@property (retain, nonatomic) AXPHostCacheManager *hostCacheManager;
@property (copy, nonatomic) id /* block */ axpTransportDataHandler;
@property (nonatomic) struct CGSize { double width; double height; } deviceSize;
@property (retain, nonatomic) NSString *deviceID;
@property (nonatomic) long long deviceOrientation;
@property (retain, nonatomic) NSByteCountFormatter *byteFormatter;
@property (weak, nonatomic) id<AXAuditRemoteDeviceDelegate> delegate;
@property (nonatomic) long long deviceAPIVersion;
@property (retain, nonatomic) AXPHostCacheOverlayView *accessibilityOverlayView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (long long)accessibilityHostCacheManagerDeviceOrientationForDeviceIdentifier:(id)a0;
- (id)accessibilityTranslationTransportAddReceiveDataHandler:(id /* block */)a0;
- (void)accessibilityTranslationTransportSendData:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)_degree1:(double)a0 isAlmostEqualTo:(double)a1;
- (BOOL)_setupConnectionForFileDescriptor:(int)a0;
- (void)accessibilityTranslationTransportCancel;
- (void)addAccessibilityOverlayViewToParentView:(id)a0;
- (void)completeConnection;
- (void)didDisconnect;
- (id)hostAPIVersion;
- (id)initWithFileDescriptor:(int)a0 identifier:(id)a1 deviceSize:(struct CGSize { double x0; double x1; })a2;
- (void)notifyDelegateOfConnectionCompletionIfNecessary;
- (void)orientationChangedToDegrees:(double)a0;
- (void)processDataFromRemoteDevice:(id)a0;
- (void)requestDeviceAPIVersion;
- (void)startAccessibility;
- (void)stopAccessibility;

@end
