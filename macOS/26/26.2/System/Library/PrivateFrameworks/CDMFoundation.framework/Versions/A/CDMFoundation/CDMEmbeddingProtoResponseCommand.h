@class CDMEmbeddingConfigs, SIRINLUINTERNALEMBEDDINGEmbeddingResponse;

@interface CDMEmbeddingProtoResponseCommand : CDMBaseCommand <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) SIRINLUINTERNALEMBEDDINGEmbeddingResponse *response;
@property (readonly, nonatomic) CDMEmbeddingConfigs *embeddingConfigs;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)dictionaryRepresentation;
- (id)initWithResponse:(id)a0 embeddingConfigs:(id)a1;

@end
