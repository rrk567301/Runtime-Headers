@class NSString;

@interface ATXBluetoothConnectedStream : NSObject <ATXGenericEventStreamBase>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)deviceTypeFromBiomeBluetoothDeviceType:(int)a0;

@end
