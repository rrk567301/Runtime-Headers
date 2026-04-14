@class NSString;

@interface BMPBMailContentEventFilteringSubset : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasUniqueId;
@property (retain, nonatomic) NSString *uniqueId;
@property (readonly, nonatomic) BOOL hasDomainId;
@property (retain, nonatomic) NSString *domainId;
@property (readonly, nonatomic) BOOL hasPersonaId;
@property (retain, nonatomic) NSString *personaId;

- (id)dictionaryRepresentation;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
