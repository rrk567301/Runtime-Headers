@class NSString;

@interface PKSubcredentialSharingAnalyticsData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *sharerKeyIdentifier;
@property (nonatomic) unsigned long long sharingInvitationFlow;

- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqualToSharingAnalyticsData:(id)a0;

@end
