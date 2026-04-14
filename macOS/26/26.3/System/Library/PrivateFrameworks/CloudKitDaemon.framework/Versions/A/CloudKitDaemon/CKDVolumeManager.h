@interface CKDVolumeManager : NSObject

+ (void)initialize;
+ (id)volumeForVolumeUUID:(id)a0;
+ (void)_rebuildVolumes;
+ (id)deviceIDForVolumeUUID:(id)a0;
+ (id)volumeUUIDForDeviceID:(id)a0;
+ (id)volumeForDeviceID:(id)a0;

@end
