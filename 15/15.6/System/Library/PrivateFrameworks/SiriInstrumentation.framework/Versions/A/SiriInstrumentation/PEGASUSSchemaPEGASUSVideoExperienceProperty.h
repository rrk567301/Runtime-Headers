@class NSData;

@interface PEGASUSSchemaPEGASUSVideoExperienceProperty : SISchemaInstrumentationMessage {
    struct { unsigned char isForegroundAppAvailable : 1; unsigned char isRecommendationRequest : 1; unsigned char isThirdPartyRequest : 1; } _has;
}

@property (nonatomic) char isForegroundAppAvailable;
@property (nonatomic) char hasIsForegroundAppAvailable;
@property (nonatomic) char isRecommendationRequest;
@property (nonatomic) char hasIsRecommendationRequest;
@property (nonatomic) char isThirdPartyRequest;
@property (nonatomic) char hasIsThirdPartyRequest;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteIsForegroundAppAvailable;
- (void)deleteIsRecommendationRequest;
- (void)deleteIsThirdPartyRequest;
- (id)suppressMessageUnderConditions;

@end
