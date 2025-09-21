@interface AWDCoreRoutineLocationTypeItem : PBCodable <NSCopying> {
    struct { unsigned char locationType : 1; unsigned char percentage : 1; } _has;
}

@property (nonatomic) char hasLocationType;
@property (nonatomic) int locationType;
@property (nonatomic) char hasPercentage;
@property (nonatomic) int percentage;

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
