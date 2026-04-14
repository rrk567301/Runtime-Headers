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
+ (Class)attributesType;
+ (Class)addressesType;
+ (Class)namesType;
+ (Class)socialMediaHandlesType;

- (void)copyTo:(id)a0;
- (void)clearPhoneNumbers;
- (void)addEmailAddresses:(id)a0;
- (unsigned long long)namesCount;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)emailAddressesCount;
- (id)dictionaryRepresentation;
- (unsigned long long)attributesCount;
- (void)addPhoneNumbers:(id)a0;
- (void)clearNames;
- (void)clearAttributes;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (id)emailAddressesAtIndex:(unsigned long long)a0;
- (unsigned long long)phoneNumbersCount;
- (void)clearEmailAddresses;
- (unsigned long long)hash;
- (id)phoneNumbersAtIndex:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)addAttributes:(id)a0;
- (id)attributesAtIndex:(unsigned long long)a0;
- (void)addAddresses:(id)a0;
- (void)addNames:(id)a0;
- (void)addSocialMediaHandles:(id)a0;
- (id)addressesAtIndex:(unsigned long long)a0;
- (unsigned long long)addressesCount;
- (void)clearAddresses;
- (void)clearSocialMediaHandles;
- (id)namesAtIndex:(unsigned long long)a0;
- (id)socialMediaHandlesAtIndex:(unsigned long long)a0;
- (unsigned long long)socialMediaHandlesCount;

@end
