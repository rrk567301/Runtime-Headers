@class NSString, NSData, SISchemaDictationAlternativesPresent;

@interface SISchemaDictationTranscriptionMetadata : SISchemaInstrumentationMessage {
    struct { unsigned char dictationModel : 1; } _has;
}

@property (nonatomic) int dictationModel;
@property (nonatomic) char hasDictationModel;
@property (copy, nonatomic) NSString *dictationModelVersion;
@property (nonatomic) char hasDictationModelVersion;
@property (retain, nonatomic) SISchemaDictationAlternativesPresent *dictationAlternativesPresent;
@property (nonatomic) char hasDictationAlternativesPresent;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteDictationAlternativesPresent;
- (void)deleteDictationModel;
- (void)deleteDictationModelVersion;
- (id)suppressMessageUnderConditions;

@end
