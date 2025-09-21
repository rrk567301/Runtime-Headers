@class IFTSchemaIFTSystemPromptResolutionInput, NSData, SISchemaUUID, IFTSchemaIFTSystemPromptResolutionUserAction, IFTSchemaIFTStatementId;

@interface IFTSchemaIFTSystemPromptResolution : SISchemaInstrumentationMessage {
    struct { unsigned char inputModality : 1; } _has;
}

@property (retain, nonatomic) IFTSchemaIFTStatementId *statementId;
@property (nonatomic) char hasStatementId;
@property (retain, nonatomic) IFTSchemaIFTSystemPromptResolutionUserAction *userAction;
@property (nonatomic) char hasUserAction;
@property (nonatomic) int inputModality;
@property (nonatomic) char hasInputModality;
@property (retain, nonatomic) SISchemaUUID *actionEventId;
@property (nonatomic) char hasActionEventId;
@property (retain, nonatomic) SISchemaUUID *systemResponseEventId;
@property (nonatomic) char hasSystemResponseEventId;
@property (retain, nonatomic) IFTSchemaIFTSystemPromptResolutionInput *input;
@property (nonatomic) char hasInput;
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
- (void)deleteActionEventId;
- (void)deleteInput;
- (void)deleteInputModality;
- (void)deleteStatementId;
- (void)deleteSystemResponseEventId;
- (void)deleteUserAction;
- (id)suppressMessageUnderConditions;

@end
