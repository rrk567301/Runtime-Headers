@class NSString, NSData;

@interface PEGASUSSchemaPEGASUSAudioQueueStateItemTier1 : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *audioAlbum;
@property (nonatomic) BOOL hasAudioAlbum;
@property (copy, nonatomic) NSString *audioArtist;
@property (nonatomic) BOOL hasAudioArtist;
@property (copy, nonatomic) NSString *audioClientId;
@property (nonatomic) BOOL hasAudioClientId;
@property (copy, nonatomic) NSString *audioTitle;
@property (nonatomic) BOOL hasAudioTitle;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)deleteAudioAlbum;
- (void)deleteAudioArtist;
- (void)deleteAudioClientId;
- (void)deleteAudioTitle;

@end
