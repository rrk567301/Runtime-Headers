@class NSXPCConnection;

@interface SMMigrationTargetClient : NSObject {
    NSXPCConnection *_connection;
}

@property (nonatomic) unsigned long long state;

- (id)daemon;
- (void)disconnect;
- (void)connect;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)canStartMigration;
- (void)daemonDidGetError:(id)a0;

@end
