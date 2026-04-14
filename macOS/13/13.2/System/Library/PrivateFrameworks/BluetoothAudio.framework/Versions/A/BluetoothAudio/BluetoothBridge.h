@class SFDeviceDiscovery, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface BluetoothBridge : NSObject

@property (retain) NSObject<OS_dispatch_semaphore> *connectedSemaphore;
@property (retain) NSObject<OS_dispatch_semaphore> *disconnectedSemaphore;
@property (nonatomic) struct OpaqueFigEndpointManager { } *manager;
@property (retain) SFDeviceDiscovery *deviceDiscovery;
@property BOOL targetUserSession;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property struct BTSessionImpl { } *session;

+ (id)sharedBluetoothBridge;

- (id)init;
- (void).cxx_destruct;
- (void)deviceConnected:(struct BTDeviceImpl { } *)a0;
- (void)deviceDisconnected:(struct BTDeviceImpl { } *)a0;
- (BOOL)isPaired:(struct BTDeviceImpl { } *)a0;
- (void)deviceSettingChanged:(id)a0;
- (struct __CFDictionary { } *)createDescriptionWithDevice:(struct BTDeviceImpl { } *)a0;
- (void)descriptionAddNearby:(struct __CFDictionary { } *)a0 nearby:(BOOL)a1 batterySingle:(double)a2 batteryLeft:(double)a3 batteryRight:(double)a4 batteryCase:(double)a5;
- (void)addListeners;
- (void)startLEScanning:(BOOL)a0;
- (void)stopLEScanning;
- (void)removeListeners;
- (BOOL)isAudioDevice:(struct BTDeviceImpl { } *)a0;
- (BOOL)isHALPublished:(unsigned char)a0 device:(struct BTDeviceImpl { } *)a1;
- (BOOL)isConnected:(struct BTDeviceImpl { } *)a0;
- (unsigned char)supportedFormats:(struct BTDeviceImpl { } *)a0;
- (BOOL)isAppleAudioDevice:(struct BTDeviceImpl { } *)a0;
- (id)addressFromDevice:(struct BTDeviceImpl { } *)a0;
- (id)nameFromDevice:(struct BTDeviceImpl { } *)a0;
- (struct BTDeviceImpl { } *)deviceFromAddress:(id)a0;
- (struct BTDeviceImpl { } *)deviceFromAddressString:(id)a0;
- (void)connectToAddress:(id)a0 completionHandler:(id /* block */)a1;
- (void)disconnectFromAddress:(id)a0 completionHandler:(id /* block */)a1;
- (void)setListeningModeForDevice:(id)a0 listeningMode:(unsigned int)a1;
- (void)setSpatialAudioAllowed:(id)a0 enable:(BOOL)a1;
- (void)setSpatialAudioMode:(id)a0 mode:(unsigned char)a1;

@end
