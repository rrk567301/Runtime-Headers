@interface _MRGameControllerDigitizerProtobuf : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char x : 1; unsigned char y : 1; unsigned char touchDown : 1; } _has;
}

@property (nonatomic) char hasX;
@property (nonatomic) double x;
@property (nonatomic) char hasY;
@property (nonatomic) double y;
@property (nonatomic) char hasTouchDown;
@property (nonatomic) char touchDown;
@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;

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
