@class BMPBPersonEntity, BMPBTopicEntity;

@interface BMPBEntity : PBCodable <NSCopying> {
    struct { unsigned char entityType : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasPersonEntity;
@property (retain, nonatomic) BMPBPersonEntity *personEntity;
@property (readonly, nonatomic) BOOL hasTopicEntity;
@property (retain, nonatomic) BMPBTopicEntity *topicEntity;
@property (nonatomic) BOOL hasEntityType;
@property (nonatomic) int entityType;

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
- (int)StringAsEntityType:(id)a0;
- (id)entityTypeAsString:(int)a0;
- (void)clearOneofValuesForEntityType;

@end
