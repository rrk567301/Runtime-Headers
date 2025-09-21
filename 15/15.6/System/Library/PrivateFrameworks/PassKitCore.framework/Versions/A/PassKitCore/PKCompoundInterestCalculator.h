@class PKCompoundInterestCalculatorConfiguration, NSCalendar, NSMutableDictionary;

@interface PKCompoundInterestCalculator : NSObject {
    NSCalendar *_calendar;
    NSMutableDictionary *_toDateCache;
}

@property (readonly, nonatomic) PKCompoundInterestCalculatorConfiguration *configuration;

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;
- (id)_additionalBalanceForProcessingDate:(id)a0;
- (id)_creditsForProcessingDate:(id)a0;
- (char)_date:(id)a0 isApplicableForProcessingDate:(id)a1;
- (char)_interestCanBeCalculated;
- (id)_rawCompoundInterestForPaymentOfAmount:(id)a0 onDate:(id)a1 includeNewBalance:(char)a2;
- (id)_rawUnpostedInterestCalculationForPaymentOfAmount:(id)a0 onDate:(id)a1 includeNewPurchases:(char)a2;
- (id)compoundInterest;
- (id)compoundInterestForPaymentOfAmount:(id)a0 onDate:(id)a1;
- (id)compoundInterestWithPaymentOfAmount:(id)a0;

@end
