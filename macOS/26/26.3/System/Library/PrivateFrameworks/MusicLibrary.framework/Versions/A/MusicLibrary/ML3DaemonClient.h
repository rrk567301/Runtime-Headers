@interface ML3DaemonClient : ML3Client

@property (class, readonly, nonatomic) ML3DaemonClient *sharedDaemonClient;

- (id)init;
- (id)bundleID;
- (id)name;
- (int)processID;

@end
