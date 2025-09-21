@class NSString;

@interface SIRINLUINTERNALITFMITFMHypothesis : PBCodable <NSCopying> {
    struct { unsigned char label : 1; unsigned char probability : 1; } _has;
}

@property (nonatomic) char hasLabel;
@property (nonatomic) int label;
@property (nonatomic) char hasProbability;
@property (nonatomic) float probability;
@property (readonly, nonatomic) char hasStringLabel;
@property (retain, nonatomic) NSString *stringLabel;

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
