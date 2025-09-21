@class AURemoteHost, NSXPCConnection;

@interface AUHostingService : NSObject <AUHostingServiceProtocol> {
    AURemoteHost *_host;
    NSXPCConnection *_connection;
    struct AudioComponentDescription { unsigned int componentType; unsigned int componentSubType; unsigned int componentManufacturer; unsigned int componentFlags; unsigned int componentFlagsMask; } _componentDescription;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { union __rep { struct __short { struct { unsigned char __is_long_ : 1; unsigned char __size_ : 7; } ; char __padding_[0]; char __data_[23]; } __s; struct __long { struct { unsigned char __is_long_ : 1; unsigned long __cap_ : 63; } ; unsigned long long __size_; char *__data_; } __l; } __value_; } __r_; } _instanceUUID;
}

+ (char)conformsToProtocol:(id)a0;
+ (char)instancesRespondToSelector:(SEL)a0;

- (void)dealloc;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)initWithConnection:(id)a0;
- (id).cxx_construct;
- (void)closeHost:(id /* block */)a0;
- (void)establishConnection:(id /* block */)a0;
- (void)loadAudioUnitInRemoteHost:(struct AudioComponentDescription { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; })a0 config:(id)a1 reply:(id /* block */)a2;
- (void)retrieveAudioUnitInstanceID:(id /* block */)a0;

@end
