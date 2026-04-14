@class NSData;

@interface SISchemaPNRSpeechRecognitionSourceContext : SISchemaInstrumentationMessage {
    struct { unsigned char speechRecognitionSource : 1; } _has;
}

@property (nonatomic) int speechRecognitionSource;
@property (nonatomic) BOOL hasSpeechRecognitionSource;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteSpeechRecognitionSource;

@end
