@class NSXPCConnection;
@protocol NPTDServices;

@interface NetworkPerformanceTesterDClient : NSObject <NPTDServices> {
    NSXPCConnection *connection;
    id<NPTDServices> server;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)getPrivilegedFileHandleForPacketCapture:(id /* block */)a0;
- (void)getPrivilegedFileHandleForPath:(id)a0 completionHandler:(id /* block */)a1;
- (void)testServiceWithArguments:(id)a0 completionHandler:(id /* block */)a1;

@end
