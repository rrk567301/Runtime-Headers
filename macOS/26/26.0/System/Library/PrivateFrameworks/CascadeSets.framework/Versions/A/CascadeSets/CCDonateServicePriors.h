@class NSString, NSDate;

@interface CCDonateServicePriors : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long version;
@property (readonly, nonatomic) unsigned long long instanceCount;
@property (readonly, nonatomic) NSDate *donationDate;
@property (readonly, nonatomic) NSDate *fullSetDonationDate;
@property (readonly, nonatomic) NSString *revisionToken;
@property (readonly, nonatomic) unsigned short options;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithVersion:(unsigned long long)a0 instanceCount:(unsigned long long)a1 donationDate:(id)a2 fullSetDonationDate:(id)a3 revisionToken:(id)a4 options:(unsigned short)a5;
- (BOOL)isAwaitingFullSet;

@end
