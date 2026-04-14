@class NSString, NSMutableArray;

@interface SIRINLUINTERNALAdjacentSpans : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasCaptureGroupName;
@property (retain, nonatomic) NSString *captureGroupName;
@property (retain, nonatomic) NSMutableArray *spans;

+ (Class)spansType;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)clearSpans;
- (unsigned long long)spansCount;
- (void)addSpans:(id)a0;
- (id)spansAtIndex:(unsigned long long)a0;

@end
