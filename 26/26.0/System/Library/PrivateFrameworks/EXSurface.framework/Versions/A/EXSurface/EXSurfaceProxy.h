@interface EXSurfaceProxy : NSObject {
    unsigned long long _darwinID;
    unsigned int _port;
}

- (void)dealloc;
- (id)initWithMachPort:(unsigned int)a0;
- (unsigned int)decrementUseCount;
- (unsigned int)incrementUseCount;
- (id)initWithEXSurfaceDarwinID:(unsigned long long)a0 name:(const char *)a1;
- (unsigned long long)getEXSurfaceDarwinID;
- (unsigned int)makeEXSurfaceMachPort;

@end
