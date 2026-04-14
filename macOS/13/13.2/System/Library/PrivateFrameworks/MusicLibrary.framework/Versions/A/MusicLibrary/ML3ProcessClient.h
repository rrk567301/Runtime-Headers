@interface ML3ProcessClient : ML3Client

@property (class, readonly, nonatomic) ML3ProcessClient *sharedProcessClient;

- (id)name;
- (id)init;
- (id)bundleID;
- (int)processID;

@end
