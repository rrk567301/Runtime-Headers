@class NSString, NSMutableArray;

@interface SIRINLUINTERNALAdjacentSpans : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasCaptureGroupName;
@property (retain, nonatomic) NSString *captureGroupName;
@property (retain, nonatomic) NSMutableArray *spans;

+ (Class)spansType;

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
- (void)clearSpans;
- (unsigned long long)spansCount;
- (void)addSpans:(id)a0;
- (id)spansAtIndex:(unsigned long long)a0;

@end
