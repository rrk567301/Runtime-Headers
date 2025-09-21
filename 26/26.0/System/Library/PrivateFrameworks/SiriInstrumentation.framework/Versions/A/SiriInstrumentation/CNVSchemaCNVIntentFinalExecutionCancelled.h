@class NSData;

@interface CNVSchemaCNVIntentFinalExecutionCancelled : SISchemaInstrumentationMessage {
    struct { unsigned char cancellationReason : 1; } _has;
}

@property (nonatomic) int cancellationReason;
@property (nonatomic) BOOL hasCancellationReason;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)deleteCancellationReason;

@end
