@class NSString, NSDictionary, NSArray, NSDate, NSNumber, CNContact;

@interface FAFamilyMember : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDictionary *dictionary;
@property (retain) NSDictionary *idsCache;
@property (readonly, nonatomic) char isMe;
@property (readonly, copy, nonatomic) NSString *appleID;
@property (readonly, copy, nonatomic) NSArray *appleIDAliases;
@property (readonly, copy, nonatomic) NSNumber *dsid;
@property (readonly, copy, nonatomic) NSString *hashedDSID;
@property (readonly, copy, nonatomic) NSString *altDSID;
@property (readonly, copy, nonatomic) NSString *firstName;
@property (readonly, copy, nonatomic) NSString *shortName;
@property (readonly, copy, nonatomic) NSString *lastName;
@property (readonly, copy, nonatomic) NSString *fullName;
@property (readonly, nonatomic) unsigned long long age;
@property (readonly, copy, nonatomic) NSString *memberTypeDisplayString;
@property (readonly, copy, nonatomic) NSDate *birthDate;
@property (readonly, copy, nonatomic) NSString *memberTypeString;
@property (readonly, nonatomic) long long memberType;
@property (readonly, copy, nonatomic) NSNumber *memberSortOrder;
@property (readonly, copy, nonatomic) NSString *memberPhoneNumbers;
@property (readonly, copy, nonatomic) NSDate *joinedDate;
@property (readonly, copy, nonatomic) NSString *statusString;
@property (readonly, copy, nonatomic) NSString *inviteEmail;
@property (readonly, copy, nonatomic) NSString *inviteType;
@property (readonly, copy, nonatomic) NSDate *invitationDate;
@property (readonly, copy) NSNumber *badgeAfter;
@property (readonly, nonatomic) char canRemoveSelf;
@property (readonly, nonatomic) char isChildAccount;
@property (readonly, nonatomic) char hasParentalControlsEnabled;
@property (readonly, nonatomic) char hasAskToBuyEnabled;
@property (readonly, nonatomic) char hasSiwaEnabled;
@property (readonly, nonatomic) char isParent;
@property (readonly, nonatomic) char isOrganizer;
@property (readonly, nonatomic) char isGuardian;
@property (readonly, nonatomic) char hasHSA2;
@property (readonly, nonatomic) char hasLinkediTunesAccount;
@property (readonly, copy, nonatomic) NSString *iTunesNotLinkedMessage;
@property (readonly, nonatomic) NSNumber *iTunesAccountDSID;
@property (readonly, copy, nonatomic) NSString *iTunesAccountUsername;
@property (readonly, nonatomic) char purchaseSharingEnabled;
@property (readonly, nonatomic) CNContact *contact;
@property (readonly, nonatomic) NSArray *remoteGuardians;
@property (readonly, nonatomic) NSArray *remoteChildren;

+ (id)defaultInvitationDelay;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionaryRepresentation:(id)a0;
- (char)memberIsPending;
- (id)_dateWithEpochString:(id)a0;
- (char)_nilEqualProperty:(id)a0 with:(id)a1;
- (id)contactIncludingImage:(char)a0;
- (id)contactWithKeys:(id)a0 contactStore:(id)a1;
- (id)contactsIncludingImage:(char)a0;
- (id)contactsWithKeys:(id)a0 contactStore:(id)a1;
- (void)fetchFamilyPhotoWithRequestedSize:(unsigned long long)a0 fallbackToLocalAddressBook:(char)a1 completionHandler:(id /* block */)a2;
- (void)finishWith:(id)a0;
- (char)isEqualToFamilyMember:(id)a0;

@end
