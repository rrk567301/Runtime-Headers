@interface _MRColorProtobuf : PBCodable <NSCopying> {
    struct { unsigned char alpha : 1; unsigned char blue : 1; unsigned char green : 1; unsigned char red : 1; } _has;
}

@property (nonatomic) char hasRed;
@property (nonatomic) float red;
@property (nonatomic) char hasGreen;
@property (nonatomic) float green;
@property (nonatomic) char hasBlue;
@property (nonatomic) float blue;
@property (nonatomic) char hasAlpha;
@property (nonatomic) float alpha;

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
