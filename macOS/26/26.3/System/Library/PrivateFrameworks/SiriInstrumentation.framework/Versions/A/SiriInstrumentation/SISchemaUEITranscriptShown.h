@class NSData;

@interface SISchemaUEITranscriptShown : SISchemaInstrumentationMessage {
    struct { unsigned char transcriptShownReason : 1; } _has;
}

@property (nonatomic) int transcriptShownReason;
@property (nonatomic) BOOL hasTranscriptShownReason;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteTranscriptShownReason;

@end
