@class NSString, NSMutableArray, PPPBDateComponents;

@interface PPPBContact : PBCodable <NSCopying> {
    struct { unsigned char createdAt : 1; unsigned char displayNameOrder : 1; } _has;
}

@property (readonly, nonatomic) char hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) char hasGivenName;
@property (retain, nonatomic) NSString *givenName;
@property (readonly, nonatomic) char hasMiddleName;
@property (retain, nonatomic) NSString *middleName;
@property (readonly, nonatomic) char hasFamilyName;
@property (retain, nonatomic) NSString *familyName;
@property (readonly, nonatomic) char hasNickname;
@property (retain, nonatomic) NSString *nickname;
@property (retain, nonatomic) NSMutableArray *phoneNumbers;
@property (retain, nonatomic) NSMutableArray *emailAddresses;
@property (retain, nonatomic) NSMutableArray *postalAddresses;
@property (readonly, nonatomic) char hasOrganizationName;
@property (retain, nonatomic) NSString *organizationName;
@property (readonly, nonatomic) char hasBirthday;
@property (retain, nonatomic) PPPBDateComponents *birthday;
@property (readonly, nonatomic) char hasNonGregorianBirthday;
@property (retain, nonatomic) PPPBDateComponents *nonGregorianBirthday;
@property (retain, nonatomic) NSMutableArray *socialProfiles;
@property (readonly, nonatomic) char hasNamePrefix;
@property (retain, nonatomic) NSString *namePrefix;
@property (readonly, nonatomic) char hasNameSuffix;
@property (retain, nonatomic) NSString *nameSuffix;
@property (nonatomic) char hasDisplayNameOrder;
@property (nonatomic) int displayNameOrder;
@property (readonly, nonatomic) char hasSortingGivenName;
@property (retain, nonatomic) NSString *sortingGivenName;
@property (readonly, nonatomic) char hasSortingFamilyName;
@property (retain, nonatomic) NSString *sortingFamilyName;
@property (nonatomic) char hasCreatedAt;
@property (nonatomic) long long createdAt;

+ (Class)emailAddressesType;
+ (Class)phoneNumbersType;
+ (Class)postalAddressesType;
+ (Class)socialProfilesType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addEmailAddresses:(id)a0;
- (void)addPhoneNumbers:(id)a0;
- (void)addPostalAddresses:(id)a0;
- (void)clearEmailAddresses;
- (void)clearPhoneNumbers;
- (void)clearPostalAddresses;
- (id)emailAddressesAtIndex:(unsigned long long)a0;
- (unsigned long long)emailAddressesCount;
- (id)phoneNumbersAtIndex:(unsigned long long)a0;
- (unsigned long long)phoneNumbersCount;
- (id)postalAddressesAtIndex:(unsigned long long)a0;
- (unsigned long long)postalAddressesCount;
- (void)addSocialProfiles:(id)a0;
- (void)clearSocialProfiles;
- (id)socialProfilesAtIndex:(unsigned long long)a0;
- (unsigned long long)socialProfilesCount;

@end
