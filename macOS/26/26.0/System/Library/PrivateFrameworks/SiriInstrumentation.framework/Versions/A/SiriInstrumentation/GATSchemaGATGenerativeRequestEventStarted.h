@class NSData;

@interface GATSchemaGATGenerativeRequestEventStarted : SISchemaInstrumentationMessage {
    struct { unsigned char usecase : 1; unsigned char mediaQAUseCase : 1; unsigned char llmAgentName : 1; unsigned char genAIAgentUsed : 1; } _has;
}

@property (nonatomic) int usecase;
@property (nonatomic) BOOL hasUsecase;
@property (nonatomic) int mediaQAUseCase;
@property (nonatomic) BOOL hasMediaQAUseCase;
@property (nonatomic) int llmAgentName;
@property (nonatomic) BOOL hasLlmAgentName;
@property (nonatomic) int genAIAgentUsed;
@property (nonatomic) BOOL hasGenAIAgentUsed;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)deleteGenAIAgentUsed;
- (void)deleteLlmAgentName;
- (void)deleteMediaQAUseCase;
- (void)deleteUsecase;

@end
