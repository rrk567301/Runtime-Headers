@class NSData, SISchemaRequestLinkInfo;

@interface LRSchemaLRComponentIdentifierRedactionSignal : SISchemaInstrumentationMessage {
    struct { unsigned char redactConnectedEvents : 1; } _has;
}

@property (retain, nonatomic) SISchemaRequestLinkInfo *componentId;
@property (nonatomic) char hasComponentId;
@property (nonatomic) char redactConnectedEvents;
@property (nonatomic) char hasRedactConnectedEvents;
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
- (void)deleteComponentId;
- (void)deleteRedactConnectedEvents;
- (id)suppressMessageUnderConditions;

@end
