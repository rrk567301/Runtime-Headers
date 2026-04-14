@class NSData;

@interface FLOWLINKSchemaFLOWLinkActionCancelled : SISchemaInstrumentationMessage {
    struct { unsigned char cancellationInitiator : 1; } _has;
}

@property (nonatomic) int cancellationInitiator;
@property (nonatomic) BOOL hasCancellationInitiator;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)deleteCancellationInitiator;

@end
