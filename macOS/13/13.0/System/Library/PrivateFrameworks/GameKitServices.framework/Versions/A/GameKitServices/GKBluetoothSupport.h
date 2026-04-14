@interface GKBluetoothSupport : NSObject

+ (void)cleanup;
+ (int)bluetoothStatus;
+ (void)turnBluetoothOn;
+ (int)_determineBluetoothStatus;
+ (int)_directBTStatus;

@end
