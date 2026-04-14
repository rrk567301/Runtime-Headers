@class SIRINLUINTERNALSNLP_INTERMEDIATESpanFeaturizerResponse, NSString;

@interface SIRINLUINTERNALSNLP_INTERMEDIATEITFMSpanFeaturizerResponse : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasResponse;
@property (retain, nonatomic) SIRINLUINTERNALSNLP_INTERMEDIATESpanFeaturizerResponse *response;
@property (readonly, nonatomic) BOOL hasModelType;
@property (retain, nonatomic) NSString *modelType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;

@end
