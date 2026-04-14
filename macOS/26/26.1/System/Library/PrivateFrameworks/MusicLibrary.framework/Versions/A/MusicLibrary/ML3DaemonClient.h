@interface ML3DaemonClient : ML3Client

@property (class, readonly, nonatomic) ML3DaemonClient *sharedDaemonClient;

- (int)processID;
- (id)name;
- (id)bundleID;
- (id)init;

@end
