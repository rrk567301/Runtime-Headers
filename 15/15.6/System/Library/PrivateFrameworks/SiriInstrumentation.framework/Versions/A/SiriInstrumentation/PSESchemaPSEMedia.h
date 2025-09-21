@class NSData, PSESchemaPSEMediaUserFollowupAction;

@interface PSESchemaPSEMedia : SISchemaInstrumentationMessage {
    struct { unsigned char playDurationInSeconds : 1; unsigned char mediaContentDurationBucket : 1; } _has;
}

@property (nonatomic) double playDurationInSeconds;
@property (nonatomic) char hasPlayDurationInSeconds;
@property (nonatomic) int mediaContentDurationBucket;
@property (nonatomic) char hasMediaContentDurationBucket;
@property (retain, nonatomic) PSESchemaPSEMediaUserFollowupAction *lastMediaUserFollowupAction;
@property (nonatomic) char hasLastMediaUserFollowupAction;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteLastMediaUserFollowupAction;
- (void)deleteMediaContentDurationBucket;
- (void)deletePlayDurationInSeconds;
- (id)suppressMessageUnderConditions;

@end
