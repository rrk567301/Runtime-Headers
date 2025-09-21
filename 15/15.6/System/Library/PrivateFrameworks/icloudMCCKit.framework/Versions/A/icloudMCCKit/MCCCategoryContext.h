@class NSString;

@interface MCCCategoryContext : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *senderName;
@property (copy, nonatomic) NSString *senderEmail;
@property (copy, nonatomic) NSString *receiverEmail;
@property (copy, nonatomic) NSString *emailSubject;
@property (nonatomic) char isUnsubscribeHeaderPresent;
@property (nonatomic) char isSenderVIP;
@property (nonatomic) char isSenderInAddressBook;
@property (nonatomic) char isSenderRecentContact;
@property (nonatomic) char isSenderPrimary;
@property (nonatomic) char isNonPersonalAccount;
@property (copy, nonatomic) NSString *localRuleCategory;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)stringValue;

@end
