@interface ASAAggregateDevice : ASAAudioDevice

- (void)dealloc;
- (id)initWithAudioObjectID:(unsigned int)a0;
- (id)initWithDevices:(id)a0 usingMainDevice:(id)a1 andClockDevice:(id)a2 withName:(id)a3 withUID:(id)a4 isPrivate:(BOOL)a5;
- (id)initWithDevices:(id)a0 usingMainDevice:(id)a1 andClockDeviceUID:(id)a2 withName:(id)a3 withUID:(id)a4 isPrivate:(BOOL)a5;

@end
