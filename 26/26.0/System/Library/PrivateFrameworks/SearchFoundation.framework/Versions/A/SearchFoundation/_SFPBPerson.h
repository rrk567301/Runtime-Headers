@class NSString, NSArray, NSData;

@interface _SFPBPerson : PBCodable <_SFPBPerson, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *personIdentifier;
@property (copy, nonatomic) NSString *contactIdentifier;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSArray *phoneNumbers;
@property (copy, nonatomic) NSArray *emailAddresses;
@property (copy, nonatomic) NSString *photosIdentifier;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)initWithFacade:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)clearPhoneNumbers;
- (void)addEmailAddresses:(id)a0;
- (unsigned long long)emailAddressesCount;
- (id)dictionaryRepresentation;
- (void)addPhoneNumbers:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)emailAddressesAtIndex:(unsigned long long)a0;
- (unsigned long long)phoneNumbersCount;
- (void)clearEmailAddresses;
- (id)phoneNumbersAtIndex:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
