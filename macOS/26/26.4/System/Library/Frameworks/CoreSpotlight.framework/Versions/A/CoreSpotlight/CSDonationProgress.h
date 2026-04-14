@class NSNumber, NSString, NSDate;

@interface CSDonationProgress : NSObject <CSCoderEncoder, DonationProgressReporting>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long allKnownItems;
@property (readonly) unsigned long long itemsNeedingDonation;
@property (readonly) NSNumber *donatedItems;
@property (readonly) NSNumber *partiallyDonatedItems;
@property (readonly) NSNumber *itemsNeedingDonationForRedonationRequests;
@property (readonly) NSDate *dateOfNewestUndonatedItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCSCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithAllKnownItems:(unsigned long long)a0 itemsNeedingDonation:(unsigned long long)a1 donatedItems:(id)a2 partiallyDonatedItems:(id)a3 itemsNeedingDonationForRedonationRequests:(id)a4;
- (id)initWithAllKnownItems:(unsigned long long)a0 itemsNeedingDonation:(unsigned long long)a1 donatedItems:(id)a2 partiallyDonatedItems:(id)a3 itemsNeedingDonationForRedonationRequests:(id)a4 dateOfNewestUndonatedItem:(id)a5;

@end
