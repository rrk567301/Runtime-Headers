@class NSMutableString, NSMutableDictionary, NSDictionary, NSArray, NSString, NSMutableArray, NSMapTable;

@interface NURuleSystem : NSObject <NSSecureCoding> {
    NSMutableDictionary *_constants;
    NSMutableArray *_rules;
    NSMutableArray *_agenda;
    NSMutableArray *_executed;
    NSMapTable *_gradeByFact;
    NSMutableString *_runLog;
}

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSDictionary *constants;
@property (readonly, copy, nonatomic) NSMutableDictionary *state;
@property (readonly, copy, nonatomic) NSArray *rules;
@property (readonly, copy, nonatomic) NSArray *agenda;
@property (readonly, copy, nonatomic) NSArray *executed;
@property (readonly, copy, nonatomic) NSDictionary *facts;
@property (nonatomic) char enableLogging;
@property (readonly, copy, nonatomic) NSString *runLog;

- (id)debugDescription;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)reset;
- (void)evaluate;
- (id)debugQuickLookObject;
- (void)addRule:(id)a0;
- (void)_addRuleToAgenda:(id)a0;
- (void)addRulesFromArray:(id)a0;
- (void)assertFact:(id)a0;
- (void)assertFact:(id)a0 grade:(double)a1;
- (double)gradeForFact:(id)a0;
- (double)maximumGradeForFacts:(id)a0;
- (double)minimumGradeForFacts:(id)a0;
- (void)removeAllRules;
- (void)resetAndEvaluateWithInitialState:(id)a0;
- (void)retractFact:(id)a0;
- (void)retractFact:(id)a0 grade:(double)a1;
- (void)setStateObject:(id)a0 forKey:(id)a1;

@end
