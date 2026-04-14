@class NSXPCConnection;

@interface IsolatedCoreAudioUseCaseConnection : NSObject

@property (retain, nonatomic) NSXPCConnection *connection;
@property (nonatomic) int pid;
@property (nonatomic) unsigned int useCaseID;

- (id)initWithConnection:(id)a0;
- (void).cxx_destruct;
- (void)invalidate;

@end
