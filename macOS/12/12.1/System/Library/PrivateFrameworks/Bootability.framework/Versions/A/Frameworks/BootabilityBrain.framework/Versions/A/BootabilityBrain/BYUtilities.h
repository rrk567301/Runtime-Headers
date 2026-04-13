@interface BYUtilities : NSObject

+ (id)hardwareModelString;
+ (id)systemVolumeWithGroupUUID:(id)a0;
+ (id)groupUUIDForVolumeAtMountPoint:(id)a0;
+ (id)hexStringFromBytes:(const char *)a0 size:(unsigned long long)a1;
+ (id)stringForKeyPath:(id)a0 inDictionary:(id)a1;
+ (id)temporaryMountPathWithLabel:(id)a0;
+ (id)restoreVersionFromPath:(id)a0;
+ (id)dataForIONode:(id)a0 key:(id)a1;
+ (id)stringForSystemNVRAMKey:(id)a0;
+ (BOOL)securityModeFromOptions:(id)a0 securityMode:(unsigned int *)a1;

@end
