@class NSDictionary;

@interface OSISystemProfiler : NSObject

@property (retain) NSDictionary *userMachineDictionary;
@property BOOL isSSD;
@property unsigned long long extractorSpeed;
@property unsigned long long deletionSpeed;
@property double migrationTime;

+ (id)sharedProfiler;

- (void)setTarget:(id)a0;
- (id)modelName;
- (void).cxx_destruct;
- (id)initWithOptions:(id)a0;
- (void)dumpFinalStats;
- (void)populateStats;

@end
