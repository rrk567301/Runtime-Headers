@class NSData;

@interface FLOWLINKSchemaFLOWLINKActionExecutionEnded : SISchemaInstrumentationMessage {
    struct { unsigned char hasOutputToPresent : 1; } _has;
}

@property (nonatomic) BOOL hasOutputToPresent;
@property (nonatomic) BOOL hasHasOutputToPresent;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteHasOutputToPresent;

@end
