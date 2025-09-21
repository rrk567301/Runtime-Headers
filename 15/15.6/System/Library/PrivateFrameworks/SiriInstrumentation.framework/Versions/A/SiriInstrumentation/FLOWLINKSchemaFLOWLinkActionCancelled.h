@class NSData;

@interface FLOWLINKSchemaFLOWLinkActionCancelled : SISchemaInstrumentationMessage {
    struct { unsigned char cancellationInitiator : 1; } _has;
}

@property (nonatomic) int cancellationInitiator;
@property (nonatomic) char hasCancellationInitiator;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteCancellationInitiator;
- (id)suppressMessageUnderConditions;

@end
