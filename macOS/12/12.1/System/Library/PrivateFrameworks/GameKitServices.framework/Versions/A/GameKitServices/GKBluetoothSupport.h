@interface GKBluetoothSupport : NSObject

+ (void)cleanup;
+ (int)_determineBluetoothStatus;
+ (int)bluetoothStatus;
+ (void)turnBluetoothOn;
+ (int)_directBTStatus;

@end
