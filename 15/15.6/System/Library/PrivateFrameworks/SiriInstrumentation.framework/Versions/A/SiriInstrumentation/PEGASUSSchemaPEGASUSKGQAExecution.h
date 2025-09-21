@class NSArray, NSString, NSData;

@interface PEGASUSSchemaPEGASUSKGQAExecution : SISchemaInstrumentationMessage {
    struct { unsigned char kgQAUsecase : 1; unsigned char isDisputedResponse : 1; unsigned char isWebExtractedFact : 1; } _has;
}

@property (nonatomic) int kgQAUsecase;
@property (nonatomic) char hasKgQAUsecase;
@property (copy, nonatomic) NSArray *attributes;
@property (nonatomic) char isDisputedResponse;
@property (nonatomic) char hasIsDisputedResponse;
@property (copy, nonatomic) NSString *nlgKey;
@property (nonatomic) char hasNlgKey;
@property (nonatomic) char isWebExtractedFact;
@property (nonatomic) char hasIsWebExtractedFact;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)attributesCount;
- (void)clearAttributes;
- (void)addAttributes:(id)a0;
- (id)attributesAtIndex:(unsigned long long)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteAttributes;
- (void)deleteIsDisputedResponse;
- (void)deleteIsWebExtractedFact;
- (void)deleteKgQAUsecase;
- (void)deleteNlgKey;
- (id)suppressMessageUnderConditions;

@end
