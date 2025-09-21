@class NSString, CalculateResult;

@interface WBSCalculationResult : NSObject {
    CalculateResult *_result;
}

@property (readonly, nonatomic, getter=isCalculation) char calculation;
@property (readonly, nonatomic, getter=isCurrencyConversion) char currencyConversion;
@property (readonly, nonatomic) NSString *sectionTitle;
@property (readonly, nonatomic) NSString *formattedExpression;
@property (readonly, nonatomic) NSString *formattedResult;
@property (readonly, nonatomic) NSString *formattedEquation;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithCalculateResult:(id)a0;
- (id)reflectedStringForQueryString:(id)a0;

@end
