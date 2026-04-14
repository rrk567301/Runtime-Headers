@class NSXPCConnection;

@interface SMMigrationTargetClient : NSObject {
    NSXPCConnection *_connection;
}

@property (nonatomic) unsigned long long state;

- (void)disconnect;
- (id)daemon;
- (void)dealloc;
- (id)init;
- (void)connect;
- (void).cxx_destruct;
- (BOOL)canStartMigration;
- (void)daemonDidGetError:(id)a0;

@end
