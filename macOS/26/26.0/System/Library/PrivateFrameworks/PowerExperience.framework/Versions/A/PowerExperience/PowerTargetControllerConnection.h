@class NSXPCConnection;

@interface PowerTargetControllerConnection : NSObject

@property (retain, nonatomic) NSXPCConnection *connection;

- (id)init;
- (void).cxx_destruct;
- (BOOL)ignoreUSBDeviceMode:(BOOL)a0;

@end
