@interface ICDFireWireDevice : ICDDevice

@property (readonly) unsigned long long guid;

- (id)initWithGUID:(unsigned long long)a0;
- (short)openDevice;
- (id)initWithGUID:(unsigned long long)a0 ioregPath:(char[512])a1;
- (void)updateDeviceDictionary:(id)a0;
- (void)unregisterDevice;
- (void)registerDevice;

@end
