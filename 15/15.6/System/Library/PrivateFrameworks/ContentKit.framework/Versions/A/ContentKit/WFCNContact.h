@class NSString, CNContact;

@interface WFCNContact : WFContact {
    int _propertyID;
    long long _multivalueIndex;
}

@property (readonly, nonatomic) char fromVCard;
@property (readonly, copy, nonatomic) CNContact *contact;
@property (readonly, copy, nonatomic) NSString *contactIdentifier;
@property (readonly, copy, nonatomic) NSString *accountIdentifier;

+ (char)supportsSecureCoding;
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

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)URLs;
- (id)imageData;
- (id)middleName;
- (id)namePrefix;
- (id)nameSuffix;
- (id)nickname;
- (id)firstName;
- (id)formattedName;
- (id)phoneNumbers;
- (id)emailAddresses;
- (id)lastName;
- (id)birthday;
- (id)instantMessageAddresses;
- (id)thumbnailImageData;
- (id)organization;
- (char)hasImageData;
- (id)socialProfiles;
- (id)dates;
- (long long)multivalueIndex;
- (id)streetAddresses;
- (id)attributionSetWithCachingIdentifier:(id)a0;
- (id)contactIdentifierForINPerson;
- (id)contactWithPropertyID:(int)a0 multivalueIndex:(long long)a1;
- (char)hasValueForPropertyID:(int)a0;
- (id)initWithCNContact:(id)a0 propertyID:(int)a1 multivalueIndex:(long long)a2 fromVCard:(char)a3;
- (char)isPropertyIDRepresented:(int)a0;
- (int)propertyID;
- (void)refetchContact;
- (id)vCardRepresentationWithFullData:(char)a0;
- (id)valueForPropertyID:(int)a0;

@end
