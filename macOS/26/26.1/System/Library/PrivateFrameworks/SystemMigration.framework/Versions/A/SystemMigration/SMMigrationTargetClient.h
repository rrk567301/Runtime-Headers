@class NSXPCConnection;

@interface SMMigrationTargetClient : NSObject {
    NSXPCConnection *_connection;
}

@property (nonatomic) unsigned long long state;

- (void)disconnect;
- (void)connect;
- (id)daemon;
- (void)dealloc;
- (void).cxx_destruct;
- (id)init;
- (BOOL)canStartMigration;
- (void)daemonDidGetError:(id)a0;

@end
