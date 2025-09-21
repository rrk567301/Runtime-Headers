@class VCPProtoPoint;

@interface VCPProtoLine : PBCodable <NSCopying>

@property (retain, nonatomic) VCPProtoPoint *start;
@property (retain, nonatomic) VCPProtoPoint *end;

+ (id)lineFromPoint:(struct CGPoint { double x0; double x1; })a0 toPoint:(struct CGPoint { double x0; double x1; })a1;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (struct CGPoint { double x0; double x1; })startPointValue;
- (struct CGPoint { double x0; double x1; })endPointValue;

@end
