@class CBDiscovery, CUSystemMonitor, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface BluetoothBridge : NSObject

@property (nonatomic) BOOL noHFPSupport;
@property (retain) NSObject<OS_dispatch_semaphore> *connectedSemaphore;
@property (nonatomic) struct OpaqueFigEndpointManager { } *manager;
@property (retain) CBDiscovery *deviceDiscovery;
@property BOOL targetUserSession;
@property (retain) CUSystemMonitor *systemMonitor;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (copy) id /* block */ lowerScanRate;
@property (copy) id /* block */ activation;
@property (copy) id /* block */ activationTimeoutBlock;

+ (id)sharedBluetoothBridge;

- (void)connectToAddress:(id)a0 completionHandler:(id /* block */)a1;
- (id)deviceFromIdentifier:(id)a0;
- (unsigned char)supportedFormats:(id)a0;
- (void)addListeners;
- (struct __CFDictionary { } *)createDescriptionWithDevice:(id)a0;
- (BOOL)isHALPublished:(unsigned char)a0 device:(id)a1;
- (id)init;
- (void)getHFPSupportStatus;
- (id)addressFromDevice:(id)a0;
- (id)uidFromDevice:(id)a0;
- (BOOL)isConnected:(id)a0;
- (void)startLEScanning:(BOOL)a0;
- (void)stopLEScanning;
- (id)nameFromDevice:(id)a0;
- (void).cxx_destruct;
- (BOOL)shouldRemoveDevice:(id)a0;

@end
