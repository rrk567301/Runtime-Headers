@class NSString;

@interface CPLSocialGroupPerson : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasPersonIdentifier;
@property (retain, nonatomic) NSString *personIdentifier;

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;

@end
