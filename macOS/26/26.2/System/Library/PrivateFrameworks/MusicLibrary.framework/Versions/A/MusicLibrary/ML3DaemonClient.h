@interface ML3DaemonClient : ML3Client

@property (class, readonly, nonatomic) ML3DaemonClient *sharedDaemonClient;

- (id)bundleID;
- (int)processID;
- (id)name;
- (id)init;

@end
