@interface _LSDDeviceEncryptionService : _LSDService

+ (id)XPCInterface;
+ (unsigned short)connectionType;
+ (Class)clientClass;
+ (BOOL)XPCConnectionIsAlwaysPrivileged;

@end
