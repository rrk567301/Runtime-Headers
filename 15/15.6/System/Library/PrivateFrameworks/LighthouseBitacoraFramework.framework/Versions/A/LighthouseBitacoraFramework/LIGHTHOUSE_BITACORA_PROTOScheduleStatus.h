@interface LIGHTHOUSE_BITACORA_PROTOScheduleStatus : PBCodable <NSCopying> {
    struct { unsigned char scheduled : 1; } _has;
}

@property (nonatomic) char hasScheduled;
@property (nonatomic) char scheduled;

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
