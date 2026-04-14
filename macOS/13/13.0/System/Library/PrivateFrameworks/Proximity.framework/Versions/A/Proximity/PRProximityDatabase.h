@interface PRProximityDatabase : NSObject

+ (id)getDeviceData;
+ (BOOL)getProximityDeviceParameters:(id *)a0 forDeviceModel:(id)a1 withError:(id *)a2;
+ (long long)getPRDeviceModelFromModelId:(id)a0;
+ (long long)getScannerDeviceModel;
+ (char)getDeviceBtTxPowerFromModel:(long long)a0;
+ (char)getDeviceBtRxOffsetFromModel:(long long)a0;

- (id)init;

@end
