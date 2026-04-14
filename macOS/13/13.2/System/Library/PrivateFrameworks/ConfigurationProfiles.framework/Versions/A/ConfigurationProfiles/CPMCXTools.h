@interface CPMCXTools : NSObject

+ (id)secureSettingsFolderForDevice;
+ (id)secureSettingsFolderForUIDLegacy:(unsigned int)a0;
+ (id)secureSettingsFolderForUIDNew:(unsigned int)a0;
+ (id)secureSettingsFolderForUID:(unsigned int)a0;
+ (id)secureSettingsPathForDeviceDomain:(id)a0;
+ (id)secureSettingsPathForUID:(unsigned int)a0 domain:(id)a1;
+ (id)secureSettingsCleanPathComponent:(id)a0;
+ (id)secureSettingsForDeviceDomain:(id)a0;
+ (id)secureSettingsForUID:(unsigned int)a0 domain:(id)a1;

@end
