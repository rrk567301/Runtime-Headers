@class NSString, HDCodableMedicalDate, NSMutableArray;

@interface HDCodableSignedClinicalDataSubject : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasFullName;
@property (retain, nonatomic) NSString *fullName;
@property (readonly, nonatomic) BOOL hasBirthDate;
@property (retain, nonatomic) HDCodableMedicalDate *birthDate;
@property (readonly, nonatomic) BOOL hasGender;
@property (retain, nonatomic) NSString *gender;
@property (retain, nonatomic) NSMutableArray *emailAddresses;
@property (retain, nonatomic) NSMutableArray *phoneNumbers;

+ (Class)emailAddressesType;
+ (Class)phoneNumbersType;

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
- (void)clearEmailAddresses;
- (void)addEmailAddresses:(id)a0;
- (id)emailAddressesAtIndex:(unsigned long long)a0;
- (void)clearPhoneNumbers;
- (void)addPhoneNumbers:(id)a0;
- (id)phoneNumbersAtIndex:(unsigned long long)a0;
- (unsigned long long)emailAddressesCount;
- (unsigned long long)phoneNumbersCount;

@end
