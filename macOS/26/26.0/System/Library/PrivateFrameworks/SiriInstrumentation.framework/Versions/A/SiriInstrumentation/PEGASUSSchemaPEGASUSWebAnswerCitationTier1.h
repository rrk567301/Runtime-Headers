@class NSString, PEGASUSSchemaPEGASUSWebAnswerThumbnailTier1, NSData;

@interface PEGASUSSchemaPEGASUSWebAnswerCitationTier1 : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *url;
@property (nonatomic) BOOL hasUrl;
@property (copy, nonatomic) NSString *sourceDomain;
@property (nonatomic) BOOL hasSourceDomain;
@property (copy, nonatomic) NSString *readableAttribution;
@property (nonatomic) BOOL hasReadableAttribution;
@property (copy, nonatomic) NSString *citedText;
@property (nonatomic) BOOL hasCitedText;
@property (copy, nonatomic) NSString *enrichedUrl;
@property (nonatomic) BOOL hasEnrichedUrl;
@property (retain, nonatomic) PEGASUSSchemaPEGASUSWebAnswerThumbnailTier1 *thumbnail;
@property (nonatomic) BOOL hasThumbnail;
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
- (void)deleteThumbnail;
- (void)deleteCitedText;
- (void)deleteEnrichedUrl;
- (void)deleteReadableAttribution;
- (void)deleteSourceDomain;
- (void)deleteUrl;

@end
