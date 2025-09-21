@class NSArray;

@interface TUMutableRoute : TURoute

@property (nonatomic, getter=isCurrentlyPicked) char currentlyPicked;
@property (nonatomic, getter=isDefaultRoute) char defaultRoute;
@property (nonatomic) long long deviceType;
@property (nonatomic, getter=isReceiver) char receiver;
@property (nonatomic, getter=isSpeaker) char speaker;
@property (nonatomic, getter=isWiredHeadphones) char wiredHeadphones;
@property (nonatomic, getter=isWiredHeadset) char wiredHeadset;
@property (nonatomic, getter=isWirelessHeadset) char wirelessHeadset;
@property (nonatomic, getter=isAirTunes) char airTunes;
@property (nonatomic, getter=isCarAudio) char carAudio;
@property (nonatomic, getter=isGuest) char guest;
@property (nonatomic, getter=isBluetooth) char bluetooth;
@property (nonatomic, getter=isBluetoothLE) char bluetoothLE;
@property (nonatomic, getter=isBluetoothManaged) char bluetoothManaged;
@property (nonatomic) long long bluetoothEndpointType;
@property (nonatomic, getter=isInEarDetectionEnabled) char inEarDetectionEnabled;
@property (nonatomic, getter=isInEarDetectionSupported) char inEarDetectionSupported;
@property (nonatomic, getter=isPreferred) char preferred;
@property (nonatomic, getter=isPreferredAndActive) char preferredAndActive;
@property (copy, nonatomic) NSArray *identifiersOfOtherConnectedDevices;
@property (nonatomic) char supportsRelay;
@property (nonatomic, getter=isRecommended) char recommended;


@end
