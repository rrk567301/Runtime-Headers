@class NSString, NSData;

@interface PEGASUSSchemaPEGASUSWebAnswerThumbnailTier1 : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *imageUrl;
@property (nonatomic) BOOL hasImageUrl;
@property (copy, nonatomic) NSString *touchIcon;
@property (nonatomic) BOOL hasTouchIcon;
@property (copy, nonatomic) NSString *favIcon;
@property (nonatomic) BOOL hasFavIcon;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteTouchIcon;
- (void)deleteFavIcon;
- (void)deleteImageUrl;

@end
