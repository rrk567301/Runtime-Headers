@interface ML3ProcessClient : ML3Client

@property (class, readonly, nonatomic) ML3ProcessClient *sharedProcessClient;

- (id)bundleID;
- (int)processID;
- (id)name;
- (id)init;

@end
