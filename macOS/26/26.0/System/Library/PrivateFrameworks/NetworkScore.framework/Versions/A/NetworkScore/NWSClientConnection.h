@class NSXPCConnection;

@interface NWSClientConnection : NSObject

@property (retain, nonatomic) NSXPCConnection *connection;

+ (id)shared;

- (void).cxx_destruct;
- (void)activateConnectionOn:(id)a0;

@end
