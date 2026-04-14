@interface CECFakeInterfaceListener : CoreRCInterfaceListener

- (BOOL)interface:(id)a0 sendFrame:(struct CECFrame { unsigned char x0[16]; unsigned char x1 : 5; unsigned char x2 : 3; })a1 withRetryCount:(unsigned char)a2 error:(id *)a3;
- (BOOL)interface:(id)a0 pingTo:(unsigned char)a1 acknowledged:(BOOL *)a2 error:(id *)a3;
- (id)fakeAddInterfaceWithProperties:(id)a0;
- (BOOL)interface:(id)a0 setAddressMask:(unsigned short)a1 error:(id *)a2;
- (BOOL)interface:(id)a0 setPromiscMode:(BOOL)a1 error:(id *)a2;

@end
