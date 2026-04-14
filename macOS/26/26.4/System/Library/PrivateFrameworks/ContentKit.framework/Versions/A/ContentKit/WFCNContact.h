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
+ (void)contactStoreDidChange:(id)a0;
+ (id)addContactsChangeObserver:(id /* block */)a0;
+ (id)contactWithCNContact:(id)a0;
+ (id)contactWithCNContact:(id)a0 propertyID:(int)a1 multivalueIndex:(long long)a2;
+ (id)contactWithVCardData:(id)a0 propertyID:(int)a1 multivalueIndex:(long long)a2;
+ (id)contactsWithVCardData:(id)a0;
+ (id)lock_changeObservers;
+ (void)lock_updateContactStoreObservation;
+ (void)removeContactsChangeObserver:(id)a0;
+ (id)requiredKeysToFetch;

- (id)nameSuffix;
- (id)middleName;
- (id)namePrefix;
- (id)nickname;
- (id)emailAddresses;
- (id)phoneNumbers;
- (id)lastName;
- (id)URLs;
- (id)birthday;
- (id)firstName;
- (id)phoneticMiddleName;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)phoneticLastName;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)phoneticFirstName;
- (id)socialProfiles;
- (id)initWithCoder:(id)a0;
- (id)imageData;
- (id)formattedName;
- (id)instantMessageAddresses;
- (id)thumbnailImageData;
- (id)contactRelations;
- (id)organization;
- (BOOL)hasImageData;
- (id)dates;
- (long long)multivalueIndex;
- (id)streetAddresses;
- (id)attributionSetWithCachingIdentifier:(id)a0;
- (id)contactIdentifierForINPerson;
- (id)contactWithPropertyID:(int)a0 multivalueIndex:(long long)a1;
- (BOOL)hasValueForPropertyID:(int)a0;
- (id)initWithCNContact:(id)a0 propertyID:(int)a1 multivalueIndex:(long long)a2 fromVCard:(BOOL)a3;
- (BOOL)isPropertyIDRepresented:(int)a0;
- (int)propertyID;
- (void)refetchContact;
- (id)relationsWithContact:(id)a0;
- (id)relationsWithMeContact;
- (id)vCardRepresentationWithFullData:(BOOL)a0;
- (id)valueForPropertyID:(int)a0;

@end
