@interface HDCodableRoutineLocationRequest : PBRequest <NSCopying> {
    struct { unsigned char locationType : 1; } _has;
}

@property (nonatomic) char hasLocationType;
@property (nonatomic) int locationType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsLocationType:(id)a0;
- (id)locationTypeAsString:(int)a0;

@end
