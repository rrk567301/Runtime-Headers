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
- (void)deleteLastMediaUserFollowupAction;
- (void)deleteMediaContentDurationBucket;
- (void)deletePlayDurationInSeconds;

@end
