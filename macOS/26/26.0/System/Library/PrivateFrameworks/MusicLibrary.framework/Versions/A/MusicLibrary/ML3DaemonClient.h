@interface ML3DaemonClient : ML3Client

@property (class, readonly, nonatomic) ML3DaemonClient *sharedDaemonClient;

- (id)bundleID;
- (id)init;
- (id)name;
- (int)processID;

@end
