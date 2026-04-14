@interface ML3DaemonClient : ML3Client

@property (class, readonly, nonatomic) ML3DaemonClient *sharedDaemonClient;

- (id)name;
- (id)init;
- (id)bundleID;
- (int)processID;

@end
