@interface ML3ProcessClient : ML3Client

@property (class, readonly, nonatomic) ML3ProcessClient *sharedProcessClient;

- (id)bundleID;
- (id)init;
- (id)name;
- (int)processID;

@end
