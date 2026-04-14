@class NSDictionary, NSMutableDictionary;

@interface _DASPlistParser : NSObject

@property (retain, nonatomic) NSMutableDictionary *plistToDictionaryMap;
@property (retain, nonatomic) NSDictionary *overrideActivities;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (BOOL)containsOverrideForActivity:(id)a0 withLimitation:(id)a1;
- (id)dictionaryForPlist:(long long)a0;
- (BOOL)isValidSuspensionExemptions:(id)a0;
- (id)loadOverrides;
- (void)loadPlist:(long long)a0;
- (id)suspensionExemptionsForActivity:(id)a0;
- (long long)suspensionThreshold;

@end
