@class NSString, CNContact;

@interface WFCNContact : WFContact {
    int _propertyID;
    long long _multivalueIndex;
}

@property (readonly, nonatomic) BOOL fromVCard;
@property (readonly, copy, nonatomic) CNContact *contact;
@property (readonly, copy, nonatomic) NSString *contactIdentifier;
@property (readonly, copy, nonatomic) NSString *accountIdentifier;

+ (BOOL)supportsSecureCoding;
+ (id)contactWithIdentifier:(id)a0;
+ (void)contactStoreDidChange:(id)a0;
+ (id)changeObservers;
+ (id)contactWithVCardData:(id)a0 propertyID:(int)a1 multivalueIndex:(long long)a2;
+ (id)allContactsWithSortOrder:(long long)a0 passingTest:(id /* block */)a1;
+ (id)allContactsWithSortOrder:(long long)a0;
+ (id)contactsWithName:(id)a0;
+ (id)contactsWithVCardData:(id)a0;
+ (id)firstContactWithEmailAddress:(id)a0;
+ (id)firstContactWithPhoneNumber:(id)a0;
+ (id)addContactsChangeObserver:(id /* block */)a0;
+ (void)removeContactsChangeObserver:(id)a0;
+ (id)requiredKeysToFetch;
+ (id)contactWithCNContact:(id)a0 propertyID:(int)a1 multivalueIndex:(long long)a2;
+ (id)contactsWithName:(id)a0 keysToFetch:(id)a1;
+ (id)firstContactWithPredicate:(id)a0 propertyID:(int)a1 valueEqualityBlock:(id /* block */)a2;
+ (id)contactWithCNContact:(id)a0;
+ (void)updateContactStoreObservation;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)URLs;
- (id)imageData;
- (id)middleName;
- (id)namePrefix;
- (id)nameSuffix;
- (id)nickname;
- (id)firstName;
- (id)formattedName;
- (id)phoneNumbers;
- (id)lastName;
- (id)emailAddresses;
- (id)birthday;
- (id)instantMessageAddresses;
- (id)thumbnailImageData;
- (id)organization;
- (BOOL)hasImageData;
- (id)socialProfiles;
- (id)dates;
- (int)propertyID;
- (long long)multivalueIndex;
- (id)streetAddresses;
- (BOOL)hasValueForPropertyID:(int)a0;
- (id)valueForPropertyID:(int)a0;
- (id)contactWithPropertyID:(int)a0 multivalueIndex:(long long)a1;
- (id)vCardRepresentationWithFullData:(BOOL)a0;
- (id)initWithCNContact:(id)a0 propertyID:(int)a1 multivalueIndex:(long long)a2 fromVCard:(BOOL)a3;
- (void)refetchContact;
- (id)contactIdentifierForINPerson;
- (BOOL)isPropertyIDRepresented:(int)a0;

@end
