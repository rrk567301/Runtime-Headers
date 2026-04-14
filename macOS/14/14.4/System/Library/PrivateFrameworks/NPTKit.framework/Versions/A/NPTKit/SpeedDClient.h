@class NSXPCConnection;
@protocol SDServices;

@interface SpeedDClient : NSObject <SDServices> {
    NSXPCConnection *connection;
    id<SDServices> server;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)getPrivilegedFileHandleForPacketCapture:(id /* block */)a0;
- (void)getPrivilegedFileHandleForPath:(id)a0 completionHandler:(id /* block */)a1;
- (void)testServiceWithArguments:(id)a0 completionHandler:(id /* block */)a1;

@end
