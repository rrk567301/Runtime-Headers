@interface CKAppInteractionsContext : NSObject <NSCopying, NSSecureCoding> {
    void /* unknown type, empty encoding */ _outOfAppLaunchBoundaryDonationsCountByIntentTypeAndBundleId;
    void /* unknown type, empty encoding */ numberOfDiscardedDonationsByIntentTypeAndBundleId;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (id)copyWithZone:(void *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)updateDiscardedDonations:(double)a0 forIntentType:(id)a1 andBundleId:(id)a2;

@end
