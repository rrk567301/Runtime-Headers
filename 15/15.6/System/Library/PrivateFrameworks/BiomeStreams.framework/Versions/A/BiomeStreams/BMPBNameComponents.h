@class NSString;

@interface BMPBNameComponents : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasNamePrefix;
@property (retain, nonatomic) NSString *namePrefix;
@property (readonly, nonatomic) char hasGivenName;
@property (retain, nonatomic) NSString *givenName;
@property (readonly, nonatomic) char hasMiddleName;
@property (retain, nonatomic) NSString *middleName;
@property (readonly, nonatomic) char hasPreviousFamilyName;
@property (retain, nonatomic) NSString *previousFamilyName;
@property (readonly, nonatomic) char hasFamilyName;
@property (retain, nonatomic) NSString *familyName;
@property (readonly, nonatomic) char hasNameSuffix;
@property (retain, nonatomic) NSString *nameSuffix;
@property (readonly, nonatomic) char hasNickname;
@property (retain, nonatomic) NSString *nickname;

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
