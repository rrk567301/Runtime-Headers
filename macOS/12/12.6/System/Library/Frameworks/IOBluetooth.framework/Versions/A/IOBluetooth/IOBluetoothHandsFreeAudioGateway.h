@class IOBluetoothHandsFreeAudioGatewayExpansion;

@interface IOBluetoothHandsFreeAudioGateway : IOBluetoothHandsFree

@property (retain) IOBluetoothHandsFreeAudioGatewayExpansion *expansion;
@property BOOL indicatorMode;
@property BOOL indicatorEventReporting;

+ (id)deviceUUID;
+ (id)localUUID;

- (void).cxx_destruct;
- (unsigned int)version;
- (void)setVersion:(unsigned int)a0;
- (unsigned int)vendorID;
- (unsigned int)productID;
- (void)setVendorID:(unsigned int)a0;
- (void)setProductID:(unsigned int)a0;
- (void)sendResponse:(id)a0;
- (int)batteryLevel;
- (void)setBatteryLevel:(int)a0;
- (void)sdpQueryComplete:(id)a0 status:(int)a1;
- (BOOL)dockState;
- (void)setDockState:(BOOL)a0;
- (BOOL)isSiriActive;
- (void)setIsSiriActive:(BOOL)a0;
- (void)sendResponse:(id)a0 withOK:(BOOL)a1;
- (id)initWithDevice:(id)a0 delegate:(id)a1;
- (void)createIndicator:(id)a0 min:(int)a1 max:(int)a2 currentValue:(int)a3;
- (void)sendInputVolumePrivate:(id)a0;
- (id)lastUpdatedInputVolume;
- (void)setLastUpdatedInputVolume:(id)a0;
- (void)sendOutputVolumePrivate:(id)a0;
- (void)sendOKResponse;
- (void)setFCComplete:(id)a0;
- (void)setIndicator:(id)a0 value:(int)a1;
- (void)handleSiriAppear;
- (void)handleSiriDisappear;
- (void)processATCommand:(id)a0;
- (id)driverID;
- (void)processIncomingData:(char *)a0 length:(unsigned long long)a1;
- (void)sendInputVolume;
- (void)sendOutputVolume;
- (void)sendSupportedFeatures:(int)a0;
- (void)sendStatusMapping;
- (void)sendCurrentStatusValues;
- (void)processEventReporting:(id)a0;
- (void)processMicVolumeChange:(int)a0;
- (void)processSpeakerVolumeChange:(int)a0;
- (void)processAppleCommand:(id)a0;
- (void)processAppleEvent:(id)a0;

@end
