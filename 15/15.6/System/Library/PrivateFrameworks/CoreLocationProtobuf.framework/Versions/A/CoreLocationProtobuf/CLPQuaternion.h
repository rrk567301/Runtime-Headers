@interface CLPQuaternion : PBCodable <NSCopying> {
    struct { unsigned char w : 1; } _has;
}

@property (nonatomic) char hasW;
@property (nonatomic) float w;
@property (nonatomic) float x;
@property (nonatomic) float y;
@property (nonatomic) float z;

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
