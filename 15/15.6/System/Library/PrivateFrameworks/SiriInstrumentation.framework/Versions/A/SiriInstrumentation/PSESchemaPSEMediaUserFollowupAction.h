@class PSESchemaPSEMediaEntitySimilarity, NSData;

@interface PSESchemaPSEMediaUserFollowupAction : SISchemaInstrumentationMessage {
    struct { unsigned char state : 1; unsigned char mediaContentDurationBucket : 1; unsigned char isSameAppUsed : 1; unsigned char isFirstPartyAppUsedForFollowup : 1; unsigned char isAirPlay : 1; unsigned char mediaType : 1; unsigned char isSubscriber : 1; } _has;
}

@property (nonatomic) int state;
@property (nonatomic) char hasState;
@property (nonatomic) int mediaContentDurationBucket;
@property (nonatomic) char hasMediaContentDurationBucket;
@property (nonatomic) char isSameAppUsed;
@property (nonatomic) char hasIsSameAppUsed;
@property (nonatomic) char isFirstPartyAppUsedForFollowup;
@property (nonatomic) char hasIsFirstPartyAppUsedForFollowup;
@property (retain, nonatomic) PSESchemaPSEMediaEntitySimilarity *mediaEntitySimilarity;
@property (nonatomic) char hasMediaEntitySimilarity;
@property (nonatomic) char isAirPlay;
@property (nonatomic) char hasIsAirPlay;
@property (nonatomic) int mediaType;
@property (nonatomic) char hasMediaType;
@property (nonatomic) char isSubscriber;
@property (nonatomic) char hasIsSubscriber;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteIsAirPlay;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteMediaType;
- (void)deleteIsFirstPartyAppUsedForFollowup;
- (void)deleteIsSameAppUsed;
- (void)deleteIsSubscriber;
- (void)deleteMediaContentDurationBucket;
- (void)deleteMediaEntitySimilarity;
- (void)deleteState;
- (id)suppressMessageUnderConditions;

@end
