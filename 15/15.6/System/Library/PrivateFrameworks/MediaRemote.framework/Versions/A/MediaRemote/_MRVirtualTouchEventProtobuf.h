@interface _MRVirtualTouchEventProtobuf : PBCodable <NSCopying> {
    struct { unsigned char x : 1; unsigned char y : 1; unsigned char finger : 1; unsigned char phase : 1; } _has;
}

@property (nonatomic) char hasX;
@property (nonatomic) double x;
@property (nonatomic) char hasY;
@property (nonatomic) double y;
@property (nonatomic) char hasPhase;
@property (nonatomic) int phase;
@property (nonatomic) char hasFinger;
@property (nonatomic) int finger;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsPhase:(id)a0;
- (id)phaseAsString:(int)a0;

@end
