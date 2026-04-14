@class NSXPCConnection;

@interface PowerTargetControllerConnection : NSObject

@property (retain, nonatomic) NSXPCConnection *connection;

- (void).cxx_destruct;
- (id)init;
- (BOOL)ignoreUSBDeviceMode:(BOOL)a0;

@end
