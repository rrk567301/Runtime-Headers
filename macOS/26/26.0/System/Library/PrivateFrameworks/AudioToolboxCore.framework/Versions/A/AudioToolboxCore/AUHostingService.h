@class AURemoteHost, NSXPCConnection;

@interface AUHostingService : NSObject <AUHostingServiceProtocol> {
    AURemoteHost *_host;
    NSXPCConnection *_connection;
    struct AudioComponentDescription { unsigned int componentType; unsigned int componentSubType; unsigned int componentManufacturer; unsigned int componentFlags; unsigned int componentFlagsMask; } _componentDescription;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> { union __rep { struct __short { char __data_[23]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; } __rep_; } _instanceUUID;
}

+ (BOOL)instancesRespondToSelector:(SEL)a0;
+ (BOOL)conformsToProtocol:(id)a0;

- (void)dealloc;
- (id)initWithConnection:(id)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)closeHost:(id /* block */)a0;
- (void)establishConnection:(id /* block */)a0;
- (void)loadAudioUnitInRemoteHost:(struct AudioComponentDescription { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; })a0 config:(id)a1 reply:(id /* block */)a2;
- (void)retrieveAudioUnitInstanceID:(id /* block */)a0;

@end
