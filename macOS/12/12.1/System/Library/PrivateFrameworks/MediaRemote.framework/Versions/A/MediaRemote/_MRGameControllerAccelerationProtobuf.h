@class NSData;

@interface _MRGameControllerAccelerationProtobuf : PBCodable <NSCopying> {
    float _w;
    float _x;
    float _y;
    float _z;
    struct { unsigned char w : 1; unsigned char x : 1; unsigned char y : 1; unsigned char z : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasData;
@property (retain, nonatomic) NSData *data;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
