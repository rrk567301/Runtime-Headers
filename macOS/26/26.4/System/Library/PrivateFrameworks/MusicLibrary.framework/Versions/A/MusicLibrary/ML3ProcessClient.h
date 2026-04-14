@interface ML3ProcessClient : ML3Client

@property (class, readonly, nonatomic) ML3ProcessClient *sharedProcessClient;

- (int)processID;
- (id)name;
- (id)bundleID;
- (id)init;

@end
