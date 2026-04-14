@class NSData;

@interface CKDPSiteIdentifier : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) NSData *identifier;
@property (readonly, nonatomic) BOOL hasModifier;
@property (retain, nonatomic) NSData *modifier;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
