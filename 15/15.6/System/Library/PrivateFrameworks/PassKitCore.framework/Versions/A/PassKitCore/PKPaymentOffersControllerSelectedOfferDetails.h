@class NSString, NSMutableArray, PKSelectedPaymentOffer;

@interface PKPaymentOffersControllerSelectedOfferDetails : NSObject

@property (retain, nonatomic) NSMutableArray *selectedOfferHistory;
@property (readonly, nonatomic) PKSelectedPaymentOffer *selectedPaymentOffer;
@property (readonly, nonatomic) PKSelectedPaymentOffer *previouslySelectedOffer;
@property (readonly, nonatomic) unsigned long long updateReason;
@property (readonly, nonatomic) NSString *selectedPassUniqueID;

- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)clearCurrentSelectedPaymentOfferDetails;
- (char)hasSelectedOtherOffersAfterPreconfiguredInstallmentOffer;
- (char)requiresUserAction;
- (char)updateCurrentSelectedPaymentOffer:(id)a0 selectedPassUniqueID:(id)a1 updateReason:(unsigned long long)a2;
- (char)updatedSelectedOfferContents;
- (void)updatedSelectedPassUniqueID:(id)a0;

@end
