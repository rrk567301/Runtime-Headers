@class NSString, BMPBEntity, NSMutableArray;

@interface BMPBEntityRelationshipEvent : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasClientId;
@property (retain, nonatomic) NSString *clientId;
@property (readonly, nonatomic) char hasRelationship;
@property (retain, nonatomic) NSString *relationship;
@property (readonly, nonatomic) char hasSourceId;
@property (retain, nonatomic) NSString *sourceId;
@property (readonly, nonatomic) char hasSourceEntity;
@property (retain, nonatomic) BMPBEntity *sourceEntity;
@property (readonly, nonatomic) char hasTargetEntity;
@property (retain, nonatomic) BMPBEntity *targetEntity;
@property (retain, nonatomic) NSMutableArray *attributes;

+ (Class)attributesType;

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
- (unsigned long long)attributesCount;
- (void)clearAttributes;
- (void)addAttributes:(id)a0;
- (id)attributesAtIndex:(unsigned long long)a0;

@end
