@class NSData;

@interface SISchemaPNRSpeechRecognitionSourceContext : SISchemaInstrumentationMessage {
    struct { unsigned char speechRecognitionSource : 1; } _has;
}

@property (nonatomic) int speechRecognitionSource;
@property (nonatomic) char hasSpeechRecognitionSource;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteSpeechRecognitionSource;
- (id)suppressMessageUnderConditions;

@end
