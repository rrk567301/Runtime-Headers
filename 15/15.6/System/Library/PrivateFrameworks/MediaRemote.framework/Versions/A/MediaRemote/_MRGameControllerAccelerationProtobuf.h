@class NSData;

@interface _MRGameControllerAccelerationProtobuf : PBCodable <NSCopying> {
    struct { unsigned char w : 1; unsigned char x : 1; unsigned char y : 1; unsigned char z : 1; } _has;
}

@property (readonly, nonatomic) char hasData;
@property (retain, nonatomic) NSData *data;
@property (nonatomic) char hasX;
@property (nonatomic) float x;
@property (nonatomic) char hasY;
@property (nonatomic) float y;
@property (nonatomic) char hasZ;
@property (nonatomic) float z;
@property (nonatomic) char hasW;
@property (nonatomic) float w;

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

@end
