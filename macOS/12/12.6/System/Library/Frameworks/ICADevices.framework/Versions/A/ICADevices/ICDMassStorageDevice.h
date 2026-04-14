@class NSString;

@interface ICDMassStorageDevice : ICDDevice

@property (readonly) NSString *diskBSDName;

- (void)dealloc;
- (short)openDevice;
- (id)initWithDiskBSDName:(id)a0;
- (void)updateDeviceDictionary:(id)a0;
- (void)unregisterDevice;
- (void)registerDevice;

@end
