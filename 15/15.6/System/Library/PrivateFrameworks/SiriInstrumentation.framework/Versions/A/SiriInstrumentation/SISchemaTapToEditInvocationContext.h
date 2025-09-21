@class NSData;

@interface SISchemaTapToEditInvocationContext : SISchemaInstrumentationMessage {
    struct { unsigned char isTranscriptEdited : 1; } _has;
}

@property (nonatomic) char isTranscriptEdited;
@property (nonatomic) char hasIsTranscriptEdited;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteIsTranscriptEdited;
- (id)suppressMessageUnderConditions;

@end
