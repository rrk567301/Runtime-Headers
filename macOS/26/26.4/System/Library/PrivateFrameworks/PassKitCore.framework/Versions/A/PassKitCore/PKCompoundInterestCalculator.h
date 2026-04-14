@class PKCompoundInterestCalculatorConfiguration, NSCalendar, NSMutableDictionary;

@interface PKCompoundInterestCalculator : NSObject {
    NSCalendar *_calendar;
    NSMutableDictionary *_toDateCache;
}

@property (readonly, nonatomic) PKCompoundInterestCalculatorConfiguration *configuration;

- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (BOOL)_interestCanBeCalculated;
- (id)_rawUnpostedInterestCalculationForPaymentOfAmount:(id)a0 onDate:(id)a1 includeNewPurchases:(BOOL)a2;
- (id)compoundInterest;
- (id)compoundInterestForPaymentOfAmount:(id)a0 onDate:(id)a1;
- (id)compoundInterestWithPaymentOfAmount:(id)a0;

@end
