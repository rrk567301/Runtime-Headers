@class NSArray, NSData, SISchemaUUID;

@interface IFTSchemaIFTClientEventMetadata : SISchemaInstrumentationMessage {
    struct { unsigned char sender : 1; unsigned char postingSpanId : 1; unsigned char clientApplicationId : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *ifRequestId;
@property (nonatomic) char hasIfRequestId;
@property (retain, nonatomic) SISchemaUUID *ifEventId;
@property (nonatomic) char hasIfEventId;
@property (retain, nonatomic) SISchemaUUID *ifSessionId;
@property (nonatomic) char hasIfSessionId;
@property (retain, nonatomic) SISchemaUUID *clientTraceId;
@property (nonatomic) char hasClientTraceId;
@property (nonatomic) int sender;
@property (nonatomic) char hasSender;
@property (nonatomic) unsigned long long postingSpanId;
@property (nonatomic) char hasPostingSpanId;
@property (copy, nonatomic) NSArray *initiatedSpans;
@property (nonatomic) int clientApplicationId;
@property (nonatomic) char hasClientApplicationId;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteIfEventId;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)addInitiatedSpans:(id)a0;
- (void)clearInitiatedSpans;
- (void)deleteClientApplicationId;
- (void)deleteClientTraceId;
- (void)deleteIfRequestId;
- (void)deleteIfSessionId;
- (void)deleteInitiatedSpans;
- (void)deletePostingSpanId;
- (void)deleteSender;
- (id)initiatedSpansAtIndex:(unsigned long long)a0;
- (unsigned long long)initiatedSpansCount;
- (id)suppressMessageUnderConditions;

@end
