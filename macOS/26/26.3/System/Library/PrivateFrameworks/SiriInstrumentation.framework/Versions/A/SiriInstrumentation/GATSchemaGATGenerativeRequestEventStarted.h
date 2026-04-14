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

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteGenAIAgentUsed;
- (void)deleteLlmAgentName;
- (void)deleteMediaQAUseCase;
- (void)deleteUsecase;

@end
