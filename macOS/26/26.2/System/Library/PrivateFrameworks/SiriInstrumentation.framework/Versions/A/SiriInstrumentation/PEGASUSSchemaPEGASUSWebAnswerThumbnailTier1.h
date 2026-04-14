@class NSString, NSData;

@interface PEGASUSSchemaPEGASUSWebAnswerThumbnailTier1 : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *imageUrl;
@property (nonatomic) BOOL hasImageUrl;
@property (copy, nonatomic) NSString *touchIcon;
@property (nonatomic) BOOL hasTouchIcon;
@property (copy, nonatomic) NSString *favIcon;
@property (nonatomic) BOOL hasFavIcon;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)deleteTouchIcon;
- (void)deleteFavIcon;
- (void)deleteImageUrl;

@end
