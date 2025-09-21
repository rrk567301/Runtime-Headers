@class NSArray, SISchemaSiriResponseContext, NSData;

@interface SISchemaUUFRCompletion : SISchemaInstrumentationMessage {
    struct { unsigned char completionStatus : 1; } _has;
}

@property (nonatomic) int completionStatus;
@property (nonatomic) char hasCompletionStatus;
@property (copy, nonatomic) NSArray *homeKitAccessoryResponses;
@property (retain, nonatomic) SISchemaSiriResponseContext *siriResponseContext;
@property (nonatomic) char hasSiriResponseContext;
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
- (void)addHomeKitAccessoryResponse:(id)a0;
- (void)clearHomeKitAccessoryResponse;
- (void)deleteCompletionStatus;
- (void)deleteHomeKitAccessoryResponse;
- (void)deleteSiriResponseContext;
- (id)homeKitAccessoryResponseAtIndex:(unsigned long long)a0;
- (unsigned long long)homeKitAccessoryResponseCount;
- (id)suppressMessageUnderConditions;

@end
