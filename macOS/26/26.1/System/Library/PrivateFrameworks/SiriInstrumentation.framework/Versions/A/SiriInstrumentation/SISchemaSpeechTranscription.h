@class NSString, NSData;

@interface SISchemaSpeechTranscription : SISchemaInstrumentationMessage {
    struct { unsigned char speechTranscriptionType : 1; } _has;
}

@property (copy, nonatomic) NSString *aceID;
@property (nonatomic) BOOL hasAceID;
@property (nonatomic) int speechTranscriptionType;
@property (nonatomic) BOOL hasSpeechTranscriptionType;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)deleteAceID;
- (void)deleteSpeechTranscriptionType;

@end
