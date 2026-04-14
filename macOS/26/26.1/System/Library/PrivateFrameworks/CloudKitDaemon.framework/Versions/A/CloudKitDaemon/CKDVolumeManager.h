@interface CKDVolumeManager : NSObject

+ (id)deviceIDForVolumeUUID:(id)a0;
+ (void)initialize;
+ (void)_rebuildVolumes;
+ (id)volumeForVolumeUUID:(id)a0;
+ (id)volumeForDeviceID:(id)a0;
+ (id)volumeUUIDForDeviceID:(id)a0;

@end
