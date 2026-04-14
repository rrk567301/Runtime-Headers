@class NSString, NSDate;

@interface PKAccountPendingFamilyMember : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *accountIdentifier;
@property (copy, nonatomic) NSString *inviteEmail;
@property (copy, nonatomic) NSDate *inviteDate;
@property (nonatomic) BOOL displayedNotification;
@property (copy, nonatomic) NSString *altDSID;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithPendingFamilyMember:(id)a0 accountIdentifier:(id)a1;
- (BOOL)_isEqualToAccountPendingFamilyMember:(id)a0;

@end
