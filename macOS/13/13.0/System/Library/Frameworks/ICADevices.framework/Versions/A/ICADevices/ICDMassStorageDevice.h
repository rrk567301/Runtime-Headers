@class NSString;

@interface ICDMassStorageDevice : ICDDevice

@property (readonly) NSString *diskBSDName;

- (void)dealloc;
- (short)openDevice;
- (void)registerDevice;
- (void)unregisterDevice;
- (void)updateDeviceDictionary:(id)a0;
- (id)initWithDiskBSDName:(id)a0;

@end
