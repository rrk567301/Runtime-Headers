@class NSString, NSData;

@interface PEGASUSSchemaPEGASUSWebAnswerThumbnailTier1 : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *imageUrl;
@property (nonatomic) char hasImageUrl;
@property (copy, nonatomic) NSString *touchIcon;
@property (nonatomic) char hasTouchIcon;
@property (copy, nonatomic) NSString *favIcon;
@property (nonatomic) char hasFavIcon;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteTouchIcon;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteFavIcon;
- (void)deleteImageUrl;
- (id)suppressMessageUnderConditions;

@end
