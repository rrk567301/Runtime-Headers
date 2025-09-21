@interface CKAppInteractionsContext : NSObject <NSCopying, NSSecureCoding> {
    void /* unknown type, empty encoding */ _outOfAppLaunchBoundaryDonationsCountByIntentTypeAndBundleId;
    void /* unknown type, empty encoding */ numberOfDiscardedDonationsByIntentTypeAndBundleId;
}

@property (class, nonatomic, readonly) char supportsSecureCoding;

- (id)copyWithZone:(void *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)updateDiscardedDonations:(double)a0 forIntentType:(id)a1 andBundleId:(id)a2;

@end
