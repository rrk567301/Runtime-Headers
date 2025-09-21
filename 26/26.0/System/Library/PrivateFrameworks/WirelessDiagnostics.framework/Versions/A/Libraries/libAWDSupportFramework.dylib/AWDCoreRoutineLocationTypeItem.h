@interface AWDCoreRoutineLocationTypeItem : PBCodable <NSCopying> {
    struct { unsigned char locationType : 1; unsigned char percentage : 1; } _has;
}

@property (nonatomic) BOOL hasLocationType;
@property (nonatomic) int locationType;
@property (nonatomic) BOOL hasPercentage;
@property (nonatomic) int percentage;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
