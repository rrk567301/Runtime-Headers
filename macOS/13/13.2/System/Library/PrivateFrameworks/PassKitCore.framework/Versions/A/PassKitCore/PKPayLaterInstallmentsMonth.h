@class NSArray, NSDictionary, NSMutableDictionary, PKCurrencyAmount, NSDate;

@interface PKPayLaterInstallmentsMonth : NSObject {
    PKCurrencyAmount *_totalDue;
    PKCurrencyAmount *_totalPaid;
    PKCurrencyAmount *_fallbackAmount;
    NSArray *_allInstallments;
    NSDictionary *_financingPlanByInstallmentIdentifier;
    NSMutableDictionary *_installmentsByDate;
}

@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, copy, nonatomic) NSArray *financingPlans;
@property (readonly, copy, nonatomic) NSArray *paidInstallments;
@property (readonly, copy, nonatomic) NSArray *activeInstallments;

- (id)description;
- (void).cxx_destruct;
- (id)initWithFinancingPlans:(id)a0 fallbackAmount:(id)a1 startDate:(id)a2 endDate:(id)a3;
- (id)totalDue;
- (id)totalPaid;
- (id)financingPlanForInstallmentIdentifier:(id)a0;
- (id)installmentsDueInDate:(id)a0;
- (void)_updateValues;

@end
