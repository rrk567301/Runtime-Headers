@class NSDictionary, NSArray;

@interface _WKWebExtensionDeclarativeNetRequestRule : NSObject

@property (readonly, nonatomic) long long ruleID;
@property (readonly, nonatomic) long long priority;
@property (readonly, copy, nonatomic) NSDictionary *action;
@property (readonly, copy, nonatomic) NSDictionary *condition;
@property (readonly, nonatomic) NSArray *ruleInWebKitFormat;

- (long long)compare:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 errorString:(id *)a1;
- (id)_allChromeResourceTypesForCondition:(id)a0;
- (id)_chromeDomainTypeToWebKitDomainType;
- (id)_chromeResourceTypeToWebKitResourceType;
- (id)_combineRequestDomain:(id)a0 withURLFilter:(id)a1;
- (id)_convertRulesWithModifiedCondition:(id)a0 webKitActionType:(id)a1 chromeActionType:(id)a2;
- (id)_convertedResourceTypesForChromeResourceTypes:(id)a0;
- (id)_findLongestCommonSubstringWithString:(id)a0 andString:(id)a1;
- (id)_regexURLFilterForChromeURLFilter:(id)a0;
- (id)_resourcesToTargetWhenNoneAreSpecifiedInRule;
- (id)_validateHeaderInfoDictionary:(id)a0;
- (id)_webKitRuleWithWebKitActionType:(id)a0 chromeActionType:(id)a1 condition:(id)a2;
- (void)removeInvalidResourceTypesForKey:(id)a0;

@end
