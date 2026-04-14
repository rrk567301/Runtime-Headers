@class NSString, NSXPCConnection;

@interface IASBootTimeInstallClient : NSObject <IASBootTimeInstallClientProtocol>

@property (retain) NSXPCConnection *connection;
@property (retain) NSString *name;
@property (retain) NSString *path;
@property int pid;
@property unsigned int uid;

- (id)initWithConnection:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)bootTimeInstallProgress:(float)a0 estimatedTimeRemaining:(float)a1 status:(id)a2;

@end
