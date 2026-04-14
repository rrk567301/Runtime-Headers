@class NSString, NSMutableArray, PKSelectedPaymentOffer;

@interface PKPaymentOffersControllerSelectedOfferDetails : NSObject

@property (retain, nonatomic) NSMutableArray *selectedOfferHistory;
@property (readonly, nonatomic) PKSelectedPaymentOffer *selectedPaymentOffer;
@property (readonly, nonatomic) PKSelectedPaymentOffer *previouslySelectedOffer;
@property (readonly, nonatomic) unsigned long long updateReason;
@property (readonly, nonatomic) NSString *selectedPassUniqueID;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void)clearCurrentSelectedPaymentOfferDetails;
- (BOOL)hasSelectedOtherOffersAfterPreconfiguredInstallmentOffer;
- (BOOL)requiresUserAction;
- (BOOL)updateCurrentSelectedPaymentOffer:(id)a0 selectedPassUniqueID:(id)a1 updateReason:(unsigned long long)a2;
- (BOOL)updatedSelectedOfferContents;
- (void)updatedSelectedPassUniqueID:(id)a0;

@end
