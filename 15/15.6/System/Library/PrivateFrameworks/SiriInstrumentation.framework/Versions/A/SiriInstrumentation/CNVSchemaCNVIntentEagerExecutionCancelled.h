@class NSData;

@interface CNVSchemaCNVIntentEagerExecutionCancelled : SISchemaInstrumentationMessage {
    struct { unsigned char cancellationReason : 1; } _has;
}

@property (nonatomic) int cancellationReason;
@property (nonatomic) char hasCancellationReason;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteCancellationReason;
- (id)suppressMessageUnderConditions;

@end
