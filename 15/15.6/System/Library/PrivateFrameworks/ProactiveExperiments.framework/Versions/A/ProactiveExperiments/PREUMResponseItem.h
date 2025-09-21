@interface PREUMResponseItem : PBCodable <NSCopying> {
    struct { unsigned char modelId : 1; unsigned char replyTextId : 1; unsigned char responseClassId : 1; unsigned char isCustomResponse : 1; unsigned char isRobotResponse : 1; } _has;
}

@property (nonatomic) char hasModelId;
@property (nonatomic) unsigned int modelId;
@property (nonatomic) char hasResponseClassId;
@property (nonatomic) unsigned int responseClassId;
@property (nonatomic) char hasReplyTextId;
@property (nonatomic) unsigned int replyTextId;
@property (nonatomic) char hasIsCustomResponse;
@property (nonatomic) char isCustomResponse;
@property (nonatomic) char hasIsRobotResponse;
@property (nonatomic) char isRobotResponse;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
