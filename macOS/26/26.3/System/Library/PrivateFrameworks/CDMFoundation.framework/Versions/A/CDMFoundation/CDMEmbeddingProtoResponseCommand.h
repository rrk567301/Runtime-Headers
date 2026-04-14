@class CDMEmbeddingConfigs, SIRINLUINTERNALEMBEDDINGEmbeddingResponse;

@interface CDMEmbeddingProtoResponseCommand : CDMBaseCommand <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) SIRINLUINTERNALEMBEDDINGEmbeddingResponse *response;
@property (readonly, nonatomic) CDMEmbeddingConfigs *embeddingConfigs;

- (id)dictionaryRepresentation;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithResponse:(id)a0 embeddingConfigs:(id)a1;

@end
