@class NSString;

@interface BRCTrialConfiguration : NSObject

@property (readonly, nonatomic) NSString *factorPackId;
@property (readonly, nonatomic) NSString *rolloutId;
@property (readonly, nonatomic) NSString *rampId;
@property (readonly, nonatomic) BOOL enabledForFPFSMigration;

+ (id)defaultConfiguration;

- (id)init;
- (void).cxx_destruct;
- (void)refresh;
- (BOOL)boolForFactor:(id)a0 client:(id)a1 namespace:(id)a2 byDefault:(BOOL)a3;
- (long long)longLongForFactor:(id)a0 client:(id)a1 namespace:(id)a2 min:(long long)a3 max:(long long)a4 byDefault:(long long)a5;

@end
