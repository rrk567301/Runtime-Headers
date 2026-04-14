@class NSString, NSMutableArray, NSArray;

@interface AXSSDocumentTextRuleset : NSObject

@property (retain, nonatomic) NSMutableArray *_rules;
@property (copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSArray *allRules;

- (void).cxx_destruct;
- (id)init;
- (void)addRule:(id)a0;
- (id)rulesForGranularity:(long long)a0;

@end
