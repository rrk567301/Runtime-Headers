@class IFTSchemaIFTTypedValue, IFTSchemaIFTCandidatePromptStatus, NSData, IFTSchemaIFTStatementId;

@interface IFTSchemaIFTCandidate : SISchemaInstrumentationMessage {
    struct { unsigned char source : 1; } _has;
}

@property (retain, nonatomic) IFTSchemaIFTStatementId *statementId;
@property (nonatomic) char hasStatementId;
@property (nonatomic) int source;
@property (nonatomic) char hasSource;
@property (retain, nonatomic) IFTSchemaIFTCandidatePromptStatus *promptStatus;
@property (nonatomic) char hasPromptStatus;
@property (retain, nonatomic) IFTSchemaIFTTypedValue *value;
@property (nonatomic) char hasValue;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deletePromptStatus;
- (void)deleteSource;
- (void)deleteStatementId;
- (void)deleteValue;
- (id)suppressMessageUnderConditions;

@end
