@interface CECFakeInterfaceListener : CoreRCInterfaceListener

- (void)scheduleWithDispatchQueue:(id)a0;
- (id)fakeAddInterfaceWithProperties:(id)a0;
- (char)interface:(id)a0 setAddressMask:(unsigned short)a1 error:(id *)a2;
- (char)createAudioSystemDevice:(id *)a0 andFakeInterface:(id *)a1 withPhysicalAddress:(unsigned short)a2;
- (char)createDevice:(id *)a0 andFakeInterface:(id *)a1 withPhysicalAddress:(unsigned short)a2 withLogicalAddress:(unsigned char)a3;
- (char)createDeviceProvider:(id *)a0 andFakeInterface:(id *)a1 withPhysicalAddress:(unsigned short)a2 andLogicalAddress:(unsigned char)a3;
- (char)createPlaybackDevice:(id *)a0 andFakeInterface:(id *)a1 withPhysicalAddress:(unsigned short)a2;
- (char)createTVDevice:(id *)a0 andFakeInterface:(id *)a1 withPhysicalAddress:(unsigned short)a2;
- (char)interface:(id)a0 pingTo:(unsigned char)a1 acknowledged:(char *)a2 error:(id *)a3;
- (char)interface:(id)a0 sendFrame:(struct CECFrame { unsigned char x0[16]; unsigned char x1 : 5; unsigned char x2 : 3; })a1 withRetryCount:(unsigned char)a2 error:(id *)a3;
- (char)interface:(id)a0 setSnoopingMode:(char)a1 error:(id *)a2;
- (void)unscheduleFromDispatchQueue:(id)a0;

@end
