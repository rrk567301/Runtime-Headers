@class NSHashTable, NSXPCConnection;

@interface NFHardwareManagerXPC : NSObject {
    NSXPCConnection *_xpcConnection;
    NSHashTable *_delegates;
    long long _clientCount;
}

@property (readonly) NSXPCConnection *connection;

+ (id)sharedXPC;

- (id)init;
- (void).cxx_destruct;
- (void)addDelegate:(id)a0;
- (void)removeDelegate:(id)a0;

@end
