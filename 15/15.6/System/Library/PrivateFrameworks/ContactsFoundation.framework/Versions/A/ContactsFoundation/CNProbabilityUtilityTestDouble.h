@interface CNProbabilityUtilityTestDouble : NSObject <CNProbabilityUtility>

@property (nonatomic) char expectedResult;

- (id)init;
- (id)initWithExpectedResult:(char)a0;
- (char)trueWithProbability:(double)a0;

@end
