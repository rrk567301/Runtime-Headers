@class NSString, TSCEFormulaObject, TSCEEvaluationContext, TSCERegexMatcher, NSDate, TSCENumberValue;

@interface TSCELogicalTest : NSObject {
    int _operation;
    TSCENumberValue *_value;
    struct TSCEFunctor { TSCEFormulaObject *_formula; unsigned int _numArgs; unsigned int _firstSymbol; } _functorTest;
}

@property (retain, nonatomic) TSCERegexMatcher *matcher;
@property (retain, nonatomic) TSCEEvaluationContext *evaluationContext;
@property (retain, nonatomic) NSString *string;
@property (retain, nonatomic) NSDate *date;

+ (id)logicalTestWithCriterion:(id)a0 evaluationContext:(id)a1 functionSpec:(id)a2 outError:(id *)a3;

- (unsigned long long)cost;
- (id).cxx_construct;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)compare:(id)a0 outError:(id *)a1;
- (id)initWithCriterion:(id)a0 evaluationContext:(id)a1 functionSpec:(id)a2 outError:(id *)a3;
- (int)parseRaconCriteriaString:(id)a0;

@end
