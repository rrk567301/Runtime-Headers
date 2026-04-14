@interface VCPProtoPoint : PBCodable <NSCopying>

@property (nonatomic) double x;
@property (nonatomic) double y;

+ (id)pointWithPoint:(struct CGPoint { double x0; double x1; })a0;

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (struct CGPoint { double x0; double x1; })pointValue;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;

@end
