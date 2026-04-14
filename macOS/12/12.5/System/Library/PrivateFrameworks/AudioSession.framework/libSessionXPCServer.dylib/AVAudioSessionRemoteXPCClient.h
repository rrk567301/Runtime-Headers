@class AVAudioSessionXPCServer, NSXPCConnection, AVAudioSessionXPCClientRelay;

@interface AVAudioSessionRemoteXPCClient : NSObject <SessionManagerXPCProtocol> {
    AVAudioSessionXPCServer *mServer;
    struct ProcessInfo { struct ProcessToken { unsigned int mValue; } token; NSXPCConnection *xpcConnection; AVAudioSessionXPCClientRelay *mClientRelay; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *__data_; unsigned long long __size_; unsigned long long __cap_; } __l; struct __short { char __data_[23]; struct { unsigned char __size_; } ; } __s; struct __raw { unsigned long long __words[3]; } __r; } ; } __value_; } __r_; } mProcessName; } mClientProcess;
    AVAudioSessionXPCClientRelay *mClientRelay;
}

- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)pingWithReply:(id /* block */)a0;
- (void)clientSessionDestroyed:(unsigned int)a0 reply:(id /* block */)a1;
- (void)configureSession:(unsigned int)a0 shouldBeActive:(BOOL)a1 options:(unsigned long long)a2 state:(id)a3 reply:(id /* block */)a4;
- (void)deactivateSession:(unsigned int)a0 options:(unsigned long long)a1 reply:(id /* block */)a2;
- (void)deactivateSession:(unsigned int)a0 priority:(long long)a1 reply:(id /* block */)a2;
- (void)simulateActiveSession:(unsigned int)a0 state:(id)a1 reply:(id /* block */)a2;
- (void)updateActiveIOController:(unsigned int)a0 state:(id)a1 reply:(id /* block */)a2;
- (void)otherAudioPlaying:(unsigned int)a0 reply:(id /* block */)a1;
- (void)secondaryAudioShouldBeSilencedHint:(unsigned int)a0 reply:(id /* block */)a1;
- (void)promptStyle:(unsigned int)a0 reply:(id /* block */)a1;
- (void)availablePorts:(unsigned int)a0 state:(id)a1 reply:(id /* block */)a2;
- (void)connectedPorts:(unsigned int)a0 reply:(id /* block */)a1;
- (void)platformSupportWithReply:(id /* block */)a0;
- (void)startIOController:(int)a0 session:(unsigned int)a1 directions:(unsigned int)a2 startTime:(struct AudioTimeStamp { double x0; unsigned long long x1; double x2; unsigned long long x3; struct SMPTETime { short x0; short x1; unsigned int x2; unsigned int x3; unsigned int x4; short x5; short x6; short x7; short x8; } x4; unsigned int x5; unsigned int x6; })a3 flags:(unsigned long long)a4 reply:(id /* block */)a5;
- (void)stopIOController:(int)a0 session:(unsigned int)a1 reply:(id /* block */)a2;
- (void)updateRunningIODirections:(int)a0 session:(unsigned int)a1 directions:(unsigned int)a2 reply:(id /* block */)a3;
- (void)getIOControllerCurrentTime:(int)a0 session:(unsigned int)a1 reply:(id /* block */)a2;
- (void)sessionTokensWithReply:(id /* block */)a0;
- (void)createProxyForSession:(unsigned int)a0 reply:(id /* block */)a1;
- (void)destroyProxyForSession:(unsigned int)a0 reply:(id /* block */)a1;
- (void)fullStateForSession:(unsigned int)a0 reply:(id /* block */)a1;
- (void)setProcessOwningIOResources:(unsigned int)a0 session:(unsigned int)a1 reply:(id /* block */)a2;
- (void)hardwareSystemStateWithReply:(id /* block */)a0;
- (void)setHardwarePropertyValueForObject:(unsigned long long)a0 keyOrAddress:(id)a1 qualifier:(id)a2 value:(id)a3 controller:(unsigned int)a4 reply:(id /* block */)a5;
- (void)hardwarePropertyValueForObject:(unsigned long long)a0 keyOrAddress:(id)a1 qualifier:(id)a2 infoOnly:(BOOL)a3 reply:(id /* block */)a4;
- (void)getControlValue:(unsigned long long)a0 reply:(id /* block */)a1;
- (void)setControlValue:(unsigned long long)a0 value:(id)a1 controller:(unsigned int)a2 reply:(id /* block */)a3;
- (void)transformControl:(unsigned long long)a0 value:(float)a1 toDB:(BOOL)a2 reply:(id /* block */)a3;
- (void)beginOrEndControlObservation:(unsigned long long)a0 begin:(BOOL)a1 reply:(id /* block */)a2;
- (void)fakeDeviceDescription:(unsigned long long)a0 reply:(id /* block */)a1;
- (void)createFakeDevice:(id)a0 controller:(unsigned int)a1 reply:(id /* block */)a2;
- (void)destroyFakeDevice:(unsigned long long)a0 controller:(unsigned int)a1 reply:(id /* block */)a2;
- (void)setDefaultRoutePreference:(id)a0 transient:(BOOL)a1 controller:(unsigned int)a2 reply:(id /* block */)a3;
- (void)resetDefaultRoutePreference:(unsigned char)a0 transient:(BOOL)a1 controller:(unsigned int)a2 reply:(id /* block */)a3;
- (id)initWithServer:(id)a0 process:(struct ProcessInfo { struct ProcessToken { unsigned int x0; } x0; id x1; id x2; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x3; })a1;
- (id)clientRelay;
- (void *)world;

@end
