@class NSArray, NSMutableArray;

@interface AXSSDocumentTextRulesetManager : NSObject

@property (retain, nonatomic) NSMutableArray *_rulesets;
@property (readonly, copy, nonatomic) NSArray *rulesets;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)init;
- (id)description;
- (void)_loadCustomRulesets;
- (void)loadRulesets;

@end
