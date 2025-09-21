@class BMPBPersonEntity, BMPBTopicEntity;

@interface BMPBEntity : PBCodable <NSCopying> {
    struct { unsigned char entityType : 1; } _has;
}

@property (readonly, nonatomic) char hasPersonEntity;
@property (retain, nonatomic) BMPBPersonEntity *personEntity;
@property (readonly, nonatomic) char hasTopicEntity;
@property (retain, nonatomic) BMPBTopicEntity *topicEntity;
@property (nonatomic) char hasEntityType;
@property (nonatomic) int entityType;

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
- (int)StringAsEntityType:(id)a0;
- (id)entityTypeAsString:(int)a0;
- (void)clearOneofValuesForEntityType;

@end
