@class SIRINLUINTERNALSNLP_INTERMEDIATELinearizedTensor;

@interface SIRINLUINTERNALSNLP_INTERMEDIATESpanFeaturizerResponse : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasTensor;
@property (retain, nonatomic) SIRINLUINTERNALSNLP_INTERMEDIATELinearizedTensor *tensor;

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

@end
