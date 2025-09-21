@class NSData;

@interface FLOWLINKSchemaFLOWLinkActionFailed : SISchemaInstrumentationMessage {
    struct { unsigned char reason : 1; } _has;
}

@property (nonatomic) int reason;
@property (nonatomic) char hasReason;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteReason;
- (id)suppressMessageUnderConditions;

@end
