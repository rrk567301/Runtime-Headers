@interface AHTDevice : AHTCommon

+ (id)allDevices;
+ (id)withService:(unsigned int)a0;
+ (id)withName:(id)a0;
+ (id)deviceWithParentRegistryId:(unsigned long long)a0;

- (id)description;
- (BOOL)reset;
- (id)initWithService:(unsigned int)a0;
- (BOOL)setPower:(long long)a0;
- (BOOL)getPower:(long long *)a0;
- (id)getBootLoader;
- (id)getInterfaces;
- (id)getInterface:(unsigned char)a0;
- (id)getInterfaceWithName:(id)a0;
- (id)reporterResults;

@end
