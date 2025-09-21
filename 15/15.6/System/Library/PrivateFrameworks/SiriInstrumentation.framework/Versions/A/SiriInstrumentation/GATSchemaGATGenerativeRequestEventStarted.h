@class NSData;

@interface GATSchemaGATGenerativeRequestEventStarted : SISchemaInstrumentationMessage {
    struct { unsigned char usecase : 1; unsigned char mediaQAUseCase : 1; unsigned char llmAgentName : 1; unsigned char genAIAgentUsed : 1; } _has;
}

@property (nonatomic) int usecase;
@property (nonatomic) char hasUsecase;
@property (nonatomic) int mediaQAUseCase;
@property (nonatomic) char hasMediaQAUseCase;
@property (nonatomic) int llmAgentName;
@property (nonatomic) char hasLlmAgentName;
@property (nonatomic) int genAIAgentUsed;
@property (nonatomic) char hasGenAIAgentUsed;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteGenAIAgentUsed;
- (void)deleteLlmAgentName;
- (void)deleteMediaQAUseCase;
- (void)deleteUsecase;
- (id)suppressMessageUnderConditions;

@end
