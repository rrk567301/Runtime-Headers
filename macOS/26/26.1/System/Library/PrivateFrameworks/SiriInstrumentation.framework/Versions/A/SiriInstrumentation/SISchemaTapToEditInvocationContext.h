@class NSData;

@interface SISchemaTapToEditInvocationContext : SISchemaInstrumentationMessage {
    struct { unsigned char isTranscriptEdited : 1; } _has;
}

@property (nonatomic) BOOL isTranscriptEdited;
@property (nonatomic) BOOL hasIsTranscriptEdited;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)deleteIsTranscriptEdited;

@end
