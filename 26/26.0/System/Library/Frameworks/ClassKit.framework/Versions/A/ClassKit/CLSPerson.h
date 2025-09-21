@class NSString, NSPersonNameComponents;

@interface CLSPerson : CLSObject <CLSContactsSearchable>

@property (copy) NSString *appleID;
@property (copy) NSString *iCloudUserID;
@property (copy) NSString *orgID;
@property (copy) NSString *givenName;
@property (copy) NSString *middleName;
@property (copy) NSString *familyName;
@property (copy) NSString *phoneticGivenName;
@property (copy) NSString *phoneticMiddleName;
@property (copy) NSString *phoneticFamilyName;
@property (copy) NSString *personNumber;
@property long long passcodeType;
@property (getter=isProgressTrackingAllowed) BOOL progressTrackingAllowed;
@property (getter=isFederatedAccount) BOOL federatedAccount;
@property long long axmAccountStatus;
@property (copy) NSString *emailAddress;
@property (copy) NSString *grade;
@property long long sourceType;
@property (getter=isEditable) BOOL isEditable;
@property (getter=isSearchable) BOOL isSearchable;
@property (copy) NSString *searchText;
@property (readonly) NSString *displayName;
@property (readonly) NSPersonNameComponents *nameComponents;
@property (readonly) NSString *groupIdentifier;

+ (BOOL)supportsSecureCoding;
+ (id)_propertyNames;
+ (unsigned long long)roleFromString:(id)a0;
+ (id)stringForRole:(unsigned long long)a0;

- (id)_init;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)mergeWithObject:(id)a0;

@end
