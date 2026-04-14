@class NSXPCConnection;

@interface SMMigrationTargetClient : NSObject {
    NSXPCConnection *_connection;
}

@property (nonatomic) unsigned long long state;

- (void)disconnect;
- (id)daemon;
- (void)connect;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (BOOL)canStartMigration;
- (void)daemonDidGetError:(id)a0;

@end
