@class NSString, NSData, SISchemaDictationAlternativesPresent;

@interface SISchemaDictationTranscriptionMetadata : SISchemaInstrumentationMessage {
    struct { unsigned char dictationModel : 1; } _has;
}

@property (nonatomic) int dictationModel;
@property (nonatomic) BOOL hasDictationModel;
@property (copy, nonatomic) NSString *dictationModelVersion;
@property (nonatomic) BOOL hasDictationModelVersion;
@property (retain, nonatomic) SISchemaDictationAlternativesPresent *dictationAlternativesPresent;
@property (nonatomic) BOOL hasDictationAlternativesPresent;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteDictationModel;
- (void)deleteDictationModelVersion;
- (void)deleteDictationAlternativesPresent;

@end
