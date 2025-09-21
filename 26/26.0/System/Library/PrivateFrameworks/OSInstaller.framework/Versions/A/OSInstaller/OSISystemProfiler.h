@class NSDictionary;

@interface OSISystemProfiler : NSObject

@property (retain) NSDictionary *userMachineDictionary;
@property BOOL isSSD;
@property unsigned long long extractorSpeed;
@property unsigned long long deletionSpeed;
@property double migrationTime;

+ (id)sharedProfiler;

- (id)modelName;
- (id)initWithOptions:(id)a0;
- (void)setTarget:(id)a0;
- (void).cxx_destruct;
- (void)dumpFinalStats;
- (void)populateStats;

@end
