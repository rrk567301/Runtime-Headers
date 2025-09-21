@class NSString, NSDate;

@interface PKAccountPendingFamilyMember : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *accountIdentifier;
@property (copy, nonatomic) NSString *inviteEmail;
@property (copy, nonatomic) NSDate *inviteDate;
@property (nonatomic) char displayedNotification;
@property (copy, nonatomic) NSString *altDSID;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)_isEqualToAccountPendingFamilyMember:(id)a0;
- (id)initWithPendingFamilyMember:(id)a0 accountIdentifier:(id)a1;

@end
