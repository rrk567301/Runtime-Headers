@class NSData, PSESchemaPSEMediaUserFollowupAction;

@interface PSESchemaPSEMedia : SISchemaInstrumentationMessage {
    struct { unsigned char playDurationInSeconds : 1; unsigned char mediaContentDurationBucket : 1; } _has;
}

@property (nonatomic) double playDurationInSeconds;
@property (nonatomic) BOOL hasPlayDurationInSeconds;
@property (nonatomic) int mediaContentDurationBucket;
@property (nonatomic) BOOL hasMediaContentDurationBucket;
@property (retain, nonatomic) PSESchemaPSEMediaUserFollowupAction *lastMediaUserFollowupAction;
@property (nonatomic) BOOL hasLastMediaUserFollowupAction;
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
- (void)deleteLastMediaUserFollowupAction;
- (void)deleteMediaContentDurationBucket;
- (void)deletePlayDurationInSeconds;

@end
