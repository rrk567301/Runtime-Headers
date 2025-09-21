@class NSString;

@interface FCPurchaseOfferableConfiguration : NSObject

@property (copy, nonatomic) NSString *purchaseID;
@property (nonatomic) char allowsPublisherPhoneApp;
@property (nonatomic) char allowsPublisherPadApp;
@property (nonatomic) char allowsPublisherWebsite;
@property (nonatomic) char preferredOffer;

- (void).cxx_destruct;
- (id)initWithPurchaseID:(id)a0 allowsPublisherPhoneApp:(char)a1 allowsPublisherPadApp:(char)a2 allowsPublisherWebsite:(char)a3 preferredOffer:(char)a4;

@end
