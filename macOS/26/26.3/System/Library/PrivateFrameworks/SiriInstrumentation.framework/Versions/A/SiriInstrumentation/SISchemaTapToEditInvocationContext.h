@class NSData;

@interface SISchemaTapToEditInvocationContext : SISchemaInstrumentationMessage {
    struct { unsigned char isTranscriptEdited : 1; } _has;
}

@property (nonatomic) BOOL isTranscriptEdited;
@property (nonatomic) BOOL hasIsTranscriptEdited;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteIsTranscriptEdited;

@end
