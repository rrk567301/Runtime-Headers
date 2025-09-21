@interface CBUtil : NSObject

+ (BOOL)isInternalBuild;
+ (BOOL)isXROS;
+ (BOOL)isWatchOS;
+ (long long)preSSPStringToPairingCode:(id)a0;
+ (id)decodeApplePayloadByteStream:(id)a0;
+ (id)encodeApplePayloadByteStream:(id)a0;
+ (id)getBluetoothDebugSettingString:(struct __CFString { } *)a0 InKey:(struct __CFString { } *)a1;
+ (BOOL)isAppleVID:(unsigned short)a0 forVIDSrc:(unsigned char)a1;
+ (BOOL)isDeviceSupported:(id)a0;
+ (BOOL)isDeviceSupportedOnWatchOS:(id)a0;
+ (BOOL)isDeviceSupportedOnXROS:(id)a0;
+ (BOOL)isDeviceSupportedWithType:(unsigned char)a0 VIDsrc:(unsigned char)a1 VID:(unsigned short)a2 PID:(unsigned short)a3;
+ (id)preSSPPairingCodeToString:(long long)a0;
+ (void)setBluetoothDebugSetting:(struct __CFString { } *)a0 InKey:(struct __CFString { } *)a1 InValue:(void *)a2;

@end
