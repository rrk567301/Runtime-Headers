@class NSString, NSData;

@interface PEGASUSSchemaPEGASUSAudioQueueStateItemTier1 : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *audioAlbum;
@property (nonatomic) char hasAudioAlbum;
@property (copy, nonatomic) NSString *audioArtist;
@property (nonatomic) char hasAudioArtist;
@property (copy, nonatomic) NSString *audioClientId;
@property (nonatomic) char hasAudioClientId;
@property (copy, nonatomic) NSString *audioTitle;
@property (nonatomic) char hasAudioTitle;
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
- (void)deleteAudioAlbum;
- (void)deleteAudioArtist;
- (void)deleteAudioClientId;
- (void)deleteAudioTitle;
- (id)suppressMessageUnderConditions;

@end
