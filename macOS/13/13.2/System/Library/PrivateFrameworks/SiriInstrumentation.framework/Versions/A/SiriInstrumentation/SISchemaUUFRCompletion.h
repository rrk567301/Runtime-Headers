@class NSArray, SISchemaSiriResponseContext, NSData;

@interface SISchemaUUFRCompletion : SISchemaInstrumentationMessage {
    struct { unsigned char completionStatus : 1; } _has;
}

@property (nonatomic) int completionStatus;
@property (nonatomic) BOOL hasCompletionStatus;
@property (copy, nonatomic) NSArray *homeKitAccessoryResponses;
@property (retain, nonatomic) SISchemaSiriResponseContext *siriResponseContext;
@property (nonatomic) BOOL hasSiriResponseContext;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteCompletionStatus;
- (void)clearHomeKitAccessoryResponse;
- (void)deleteHomeKitAccessoryResponse;
- (void)addHomeKitAccessoryResponse:(id)a0;
- (unsigned long long)homeKitAccessoryResponseCount;
- (id)homeKitAccessoryResponseAtIndex:(unsigned long long)a0;
- (void)deleteSiriResponseContext;

@end
