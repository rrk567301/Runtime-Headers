@class NSURL, NSString;

@interface PKPaymentExternalOfferCredential : PKPaymentShareableCredential

@property (readonly, nonatomic) NSURL *passThumbnailImageURL;
@property (readonly, copy, nonatomic) NSString *criteriaIdentifier;
@property (readonly, nonatomic) BOOL didSelectOffer;

- (void).cxx_destruct;
- (id)initWithSharingInstanceIdentifier:(id)a0 passThumbnailImageURL:(id)a1 criteriaIdentifier:(id)a2 didSelectOffer:(BOOL)a3;

@end
