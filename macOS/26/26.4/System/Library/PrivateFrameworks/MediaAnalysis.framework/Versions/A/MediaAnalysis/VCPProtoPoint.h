@interface VCPProtoPoint : PBCodable <NSCopying>

@property (nonatomic) double x;
@property (nonatomic) double y;

+ (id)pointWithPoint:(struct CGPoint { double x0; double x1; })a0;

- (struct CGPoint { double x0; double x1; })pointValue;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;

@end
