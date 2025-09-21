@class NSData;

@interface CAARSchemaCAARProactiveFeatures : SISchemaInstrumentationMessage {
    struct { unsigned char isAppInTopOneRelevance : 1; unsigned char isAppInTopFiveRelevance : 1; unsigned char isAppInTopTenRelevance : 1; unsigned char isIntentInTopOneRelevance : 1; unsigned char isIntentInTopFiveRelevance : 1; unsigned char isIntentInTopTenRelevance : 1; unsigned char appRelevanceScore : 1; unsigned char intentRelevanceScore : 1; } _has;
}

@property (nonatomic) char isAppInTopOneRelevance;
@property (nonatomic) char hasIsAppInTopOneRelevance;
@property (nonatomic) char isAppInTopFiveRelevance;
@property (nonatomic) char hasIsAppInTopFiveRelevance;
@property (nonatomic) char isAppInTopTenRelevance;
@property (nonatomic) char hasIsAppInTopTenRelevance;
@property (nonatomic) char isIntentInTopOneRelevance;
@property (nonatomic) char hasIsIntentInTopOneRelevance;
@property (nonatomic) char isIntentInTopFiveRelevance;
@property (nonatomic) char hasIsIntentInTopFiveRelevance;
@property (nonatomic) char isIntentInTopTenRelevance;
@property (nonatomic) char hasIsIntentInTopTenRelevance;
@property (nonatomic) double appRelevanceScore;
@property (nonatomic) char hasAppRelevanceScore;
@property (nonatomic) double intentRelevanceScore;
@property (nonatomic) char hasIntentRelevanceScore;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteIsIntentInTopOneRelevance;
- (void)deleteIsIntentInTopTenRelevance;
- (void)deleteAppRelevanceScore;
- (void)deleteIntentRelevanceScore;
- (void)deleteIsAppInTopFiveRelevance;
- (void)deleteIsAppInTopOneRelevance;
- (void)deleteIsAppInTopTenRelevance;
- (void)deleteIsIntentInTopFiveRelevance;
- (id)suppressMessageUnderConditions;

@end
