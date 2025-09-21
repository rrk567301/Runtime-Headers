@class NSString, PEGASUSSchemaPEGASUSWebAnswerThumbnailTier1, NSData;

@interface PEGASUSSchemaPEGASUSWebAnswerCitationTier1 : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *url;
@property (nonatomic) char hasUrl;
@property (copy, nonatomic) NSString *sourceDomain;
@property (nonatomic) char hasSourceDomain;
@property (copy, nonatomic) NSString *readableAttribution;
@property (nonatomic) char hasReadableAttribution;
@property (copy, nonatomic) NSString *citedText;
@property (nonatomic) char hasCitedText;
@property (copy, nonatomic) NSString *enrichedUrl;
@property (nonatomic) char hasEnrichedUrl;
@property (retain, nonatomic) PEGASUSSchemaPEGASUSWebAnswerThumbnailTier1 *thumbnail;
@property (nonatomic) char hasThumbnail;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteCitedText;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteThumbnail;
- (void)deleteEnrichedUrl;
- (void)deleteReadableAttribution;
- (void)deleteSourceDomain;
- (void)deleteUrl;
- (id)suppressMessageUnderConditions;

@end
