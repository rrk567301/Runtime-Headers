@class NSData;

@interface PEGASUSSchemaPEGASUSPersonalizedItemInfo : SISchemaInstrumentationMessage {
    struct { unsigned char isPersonalized : 1; unsigned char score : 1; unsigned char personalizationRankingScore : 1; unsigned char positionWithoutPersonalization : 1; unsigned char personalizationCosineSimilarity : 1; unsigned char personalizationArtistAffinity : 1; unsigned char personalizationPafFrequency : 1; } _has;
}

@property (nonatomic) BOOL isPersonalized;
@property (nonatomic) BOOL hasIsPersonalized;
@property (nonatomic) float score;
@property (nonatomic) BOOL hasScore;
@property (nonatomic) float personalizationRankingScore;
@property (nonatomic) BOOL hasPersonalizationRankingScore;
@property (nonatomic) unsigned int positionWithoutPersonalization;
@property (nonatomic) BOOL hasPositionWithoutPersonalization;
@property (nonatomic) float personalizationCosineSimilarity;
@property (nonatomic) BOOL hasPersonalizationCosineSimilarity;
@property (nonatomic) float personalizationArtistAffinity;
@property (nonatomic) BOOL hasPersonalizationArtistAffinity;
@property (nonatomic) float personalizationPafFrequency;
@property (nonatomic) BOOL hasPersonalizationPafFrequency;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)deleteIsPersonalized;
- (void)deletePersonalizationArtistAffinity;
- (void)deletePersonalizationCosineSimilarity;
- (void)deletePersonalizationPafFrequency;
- (void)deletePersonalizationRankingScore;
- (void)deletePositionWithoutPersonalization;
- (void)deleteScore;

@end
