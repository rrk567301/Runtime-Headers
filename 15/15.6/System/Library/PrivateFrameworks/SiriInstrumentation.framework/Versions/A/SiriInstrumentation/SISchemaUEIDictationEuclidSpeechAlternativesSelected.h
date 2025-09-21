@class NSData;

@interface SISchemaUEIDictationEuclidSpeechAlternativesSelected : SISchemaInstrumentationMessage {
    struct { unsigned char speechAlternativesType : 1; unsigned char alternativesIndexSelectedByUser : 1; } _has;
}

@property (nonatomic) int speechAlternativesType;
@property (nonatomic) char hasSpeechAlternativesType;
@property (nonatomic) long long alternativesIndexSelectedByUser;
@property (nonatomic) char hasAlternativesIndexSelectedByUser;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteAlternativesIndexSelectedByUser;
- (void)deleteSpeechAlternativesType;
- (id)suppressMessageUnderConditions;

@end
