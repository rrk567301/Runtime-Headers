@interface SGDCKTimeRange : PBCodable <NSCopying> {
    struct { unsigned char end : 1; unsigned char endUTCOffsetSeconds : 1; unsigned char start : 1; unsigned char startUTCOffsetSeconds : 1; unsigned char floating : 1; } _has;
}

@property (nonatomic) char hasStart;
@property (nonatomic) double start;
@property (nonatomic) char hasEnd;
@property (nonatomic) double end;
@property (nonatomic) char hasStartUTCOffsetSeconds;
@property (nonatomic) long long startUTCOffsetSeconds;
@property (nonatomic) char hasEndUTCOffsetSeconds;
@property (nonatomic) long long endUTCOffsetSeconds;
@property (nonatomic) char hasFloating;
@property (nonatomic) char floating;

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
