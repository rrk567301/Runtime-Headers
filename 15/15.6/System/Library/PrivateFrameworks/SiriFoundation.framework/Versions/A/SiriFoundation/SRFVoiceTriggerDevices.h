@class BluetoothDevice;

@interface SRFVoiceTriggerDevices : NSObject

@property (readonly, nonatomic) long long pairedVoiceTriggerDeviceTypeDistribution;
@property (readonly, nonatomic) BluetoothDevice *connectedVoiceTriggerCapableBluetoothHeadphones;

+ (id)sharedVoiceTriggerDevices;

- (char)deviceSupportsCompactTrigger:(id)a0;

@end
