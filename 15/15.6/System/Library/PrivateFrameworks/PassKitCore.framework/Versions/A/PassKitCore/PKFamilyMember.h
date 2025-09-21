@class NSString, NSSet, CNContact, NSDate, NSNumber, FAFamilyMember;

@interface PKFamilyMember : NSObject <NSSecureCoding> {
    FAFamilyMember *_member;
}

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic, getter=isMe) char me;
@property (nonatomic) long long status;
@property (copy, nonatomic) NSString *appleID;
@property (copy, nonatomic) NSSet *appleIDAliases;
@property (copy, nonatomic) NSNumber *dsid;
@property (copy, nonatomic) NSString *altDSID;
@property (copy, nonatomic) NSString *firstName;
@property (copy, nonatomic) NSString *lastName;
@property (nonatomic) unsigned long long age;
@property (copy, nonatomic) NSDate *dateOfBirth;
@property (nonatomic) long long memberType;
@property (copy, nonatomic) NSDate *joinedDate;
@property (retain, nonatomic) CNContact *contact;
@property (nonatomic) char parentalControlsEnabled;
@property (nonatomic) char askToBuyEnabled;
@property (nonatomic, getter=isChildAccount) char childAccount;
@property (nonatomic, getter=isParent) char parent;
@property (nonatomic, getter=isOrganizer) char organizer;
@property (copy, nonatomic) NSString *inviteEmail;
@property (copy, nonatomic) NSDate *invitationDate;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isEqualToFamilyMember:(id)a0;
- (id)labelName;
- (char)canSharePeerPaymentAccount;
- (char)hasAppleIDAlias:(id)a0;
- (id)initWithFAFamilyMember:(id)a0;

@end
