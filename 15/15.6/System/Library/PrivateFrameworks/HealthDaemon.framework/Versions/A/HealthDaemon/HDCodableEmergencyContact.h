@class NSString;

@interface HDCodableEmergencyContact : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasName;
@property (retain, nonatomic) NSString *name;
@property (readonly, nonatomic) char hasNameContactIdentifier;
@property (retain, nonatomic) NSString *nameContactIdentifier;
@property (readonly, nonatomic) char hasPhoneNumber;
@property (retain, nonatomic) NSString *phoneNumber;
@property (readonly, nonatomic) char hasPhoneNumberContactIdentifier;
@property (retain, nonatomic) NSString *phoneNumberContactIdentifier;
@property (readonly, nonatomic) char hasPhoneNumberLabel;
@property (retain, nonatomic) NSString *phoneNumberLabel;
@property (readonly, nonatomic) char hasRelationship;
@property (retain, nonatomic) NSString *relationship;

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

@end
