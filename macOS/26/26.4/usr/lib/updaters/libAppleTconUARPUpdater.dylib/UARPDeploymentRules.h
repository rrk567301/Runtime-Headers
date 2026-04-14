@class NSMutableArray;

@interface UARPDeploymentRules : NSObject {
    NSMutableArray *_percentageRules;
    NSMutableArray *_countryRules;
}

+ (id)calculateDeploymentPercent:(id)a0;
+ (id)calculateWeeklyDeploymentDay:(id)a0;

- (void).cxx_destruct;
- (id)percentageRules;
- (id)countryRules;
- (id)initWithRulesDictionary:(id)a0;
- (BOOL)processCountryDeploymentRules:(id)a0;
- (BOOL)processPercentageDeploymentRules:(id)a0;

@end
