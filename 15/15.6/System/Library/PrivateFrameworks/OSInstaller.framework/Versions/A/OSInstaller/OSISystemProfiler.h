@class NSDictionary;

@interface OSISystemProfiler : NSObject

@property (retain) NSDictionary *userMachineDictionary;
@property char isSSD;
@property unsigned long long extractorSpeed;
@property unsigned long long deletionSpeed;
@property double migrationTime;

+ (id)sharedProfiler;

- (void).cxx_destruct;
- (void)setTarget:(id)a0;
- (id)initWithOptions:(id)a0;
- (id)modelName;
- (void)dumpFinalStats;
- (void)populateStats;

@end
