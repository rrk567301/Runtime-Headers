@class VCPProtoPoint;

@interface VCPProtoLine : PBCodable <NSCopying>

@property (retain, nonatomic) VCPProtoPoint *start;
@property (retain, nonatomic) VCPProtoPoint *end;

+ (id)lineFromPoint:(struct CGPoint { double x0; double x1; })a0 toPoint:(struct CGPoint { double x0; double x1; })a1;

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
- (struct CGPoint { double x0; double x1; })startPointValue;
- (struct CGPoint { double x0; double x1; })endPointValue;

@end
