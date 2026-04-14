@class PKSelectedPaymentOffer;

@interface PKPaymentOffersControllerSelectedOfferDetails : NSObject

@property (readonly, nonatomic) PKSelectedPaymentOffer *selectedPaymentOffer;
@property (readonly, nonatomic) PKSelectedPaymentOffer *previouslySelectedOffer;
@property (readonly, nonatomic) unsigned long long updateReason;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)clearCurrentSelectedPaymentOfferDetails;
- (id)initWithUpdateReason:(unsigned long long)a0;
- (BOOL)requiresUserAction;
- (BOOL)updateCurrentSelectedPaymentOffer:(id)a0 updateReason:(unsigned long long)a1;
- (BOOL)updatedSelectedOfferContents;

@end
