@class AURemoteHost, NSXPCConnection;

@interface AUHostingService : NSObject <AUHostingServiceProtocol> {
    AURemoteHost *_host;
    NSXPCConnection *_connection;
    struct AudioComponentDescription { unsigned int componentType; unsigned int componentSubType; unsigned int componentManufacturer; unsigned int componentFlags; unsigned int componentFlagsMask; } _componentDescription;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *__data_; unsigned long long __size_; unsigned long long __cap_; } __l; struct __short { char __data_[23]; struct { unsigned char __size_; } ; } __s; struct __raw { unsigned long long __words[3]; } __r; } ; } __value_; } __r_; } _instanceUUID;
}

+ (BOOL)conformsToProtocol:(id)a0;
+ (BOOL)instancesRespondToSelector:(SEL)a0;

- (void)dealloc;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)initWithConnection:(id)a0;
- (id).cxx_construct;
- (void)retrieveAudioUnitInstanceID:(id /* block */)a0;
- (void)loadAudioUnitInRemoteHost:(id)a0 withReply:(id /* block */)a1;
- (void)closeHost:(id /* block */)a0;

@end
