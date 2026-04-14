@class NSString, NSMutableArray;

@interface BMPBPersonEntity : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *names;
@property (readonly, nonatomic) BOOL hasCustomId;
@property (retain, nonatomic) NSString *customId;
@property (readonly, nonatomic) BOOL hasContactId;
@property (retain, nonatomic) NSString *contactId;
@property (retain, nonatomic) NSMutableArray *emailAddresses;
@property (retain, nonatomic) NSMutableArray *addresses;
@property (retain, nonatomic) NSMutableArray *phoneNumbers;
@property (retain, nonatomic) NSMutableArray *socialMediaHandles;
@property (retain, nonatomic) NSMutableArray *attributes;

+ (Class)emailAddressesType;
+ (Class)phoneNumbersType;
+ (Class)namesType;
+ (Class)addressesType;
+ (Class)socialMediaHandlesType;
+ (Class)attributesType;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (void)clearAttributes;
- (unsigned long long)attributesCount;
- (void)clearNames;
- (unsigned long long)namesCount;
- (void)addAttributes:(id)a0;
- (id)attributesAtIndex:(unsigned long long)a0;
- (void)clearEmailAddresses;
- (void)addEmailAddresses:(id)a0;
- (id)emailAddressesAtIndex:(unsigned long long)a0;
- (void)clearPhoneNumbers;
- (void)addPhoneNumbers:(id)a0;
- (id)phoneNumbersAtIndex:(unsigned long long)a0;
- (unsigned long long)emailAddressesCount;
- (unsigned long long)phoneNumbersCount;
- (void)addNames:(id)a0;
- (id)namesAtIndex:(unsigned long long)a0;
- (void)clearAddresses;
- (void)addAddresses:(id)a0;
- (unsigned long long)addressesCount;
- (id)addressesAtIndex:(unsigned long long)a0;
- (void)clearSocialMediaHandles;
- (void)addSocialMediaHandles:(id)a0;
- (unsigned long long)socialMediaHandlesCount;
- (id)socialMediaHandlesAtIndex:(unsigned long long)a0;

@end
