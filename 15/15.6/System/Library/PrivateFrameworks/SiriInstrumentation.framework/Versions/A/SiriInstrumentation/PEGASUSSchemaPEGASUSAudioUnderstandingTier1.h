@class NSString, NSData;

@interface PEGASUSSchemaPEGASUSAudioUnderstandingTier1 : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *audioArtist;
@property (nonatomic) char hasAudioArtist;
@property (copy, nonatomic) NSString *audioAppName;
@property (nonatomic) char hasAudioAppName;
@property (copy, nonatomic) NSString *audioEntity;
@property (nonatomic) char hasAudioEntity;
@property (copy, nonatomic) NSString *audioEntityOriginalValue;
@property (nonatomic) char hasAudioEntityOriginalValue;
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
- (void)deleteAudioAppName;
- (void)deleteAudioArtist;
- (void)deleteAudioEntity;
- (void)deleteAudioEntityOriginalValue;
- (id)suppressMessageUnderConditions;

@end
