@class NSData;

@interface FLOWLINKSchemaFLOWLINKActionExecutionEnded : SISchemaInstrumentationMessage {
    struct { unsigned char hasOutputToPresent : 1; } _has;
}

@property (nonatomic) char hasOutputToPresent;
@property (nonatomic) char hasHasOutputToPresent;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteHasOutputToPresent;
- (id)suppressMessageUnderConditions;

@end
