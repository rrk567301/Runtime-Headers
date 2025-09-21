@interface IOBluetoothObjectTranslator : NSObject

+ (unsigned long long)bluetoothObjectIDForNSUUID:(id)a0;
+ (char)isUUID:(id)a0 partialEqualToUUID:(id)a1;
+ (id)partialPeerIdentifierForBluetoothObjectID:(unsigned long long)a0;

@end
