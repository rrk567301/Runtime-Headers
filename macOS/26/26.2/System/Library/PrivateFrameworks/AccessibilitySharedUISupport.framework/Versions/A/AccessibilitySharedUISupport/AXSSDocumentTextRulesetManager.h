@class NSArray, NSMutableArray;

@interface AXSSDocumentTextRulesetManager : NSObject

@property (retain, nonatomic) NSMutableArray *_rulesets;
@property (readonly, copy, nonatomic) NSArray *rulesets;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (void)_loadCustomRulesets;
- (void)loadRulesets;

@end
