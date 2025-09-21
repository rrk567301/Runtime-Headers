@class NSData, GMSSchemaGMSPrivateCloudSpeculativeDecodingMetrics;

@interface GMSSchemaGMSPrivateCloudMetrics : SISchemaInstrumentationMessage {
    struct { unsigned char tokenRate : 1; unsigned char timeToFirstTokenMillis : 1; unsigned char extendLatencyMillis : 1; unsigned char outputTokensCount : 1; unsigned char inputTokensCount : 1; } _has;
}

@property (nonatomic) double tokenRate;
@property (nonatomic) char hasTokenRate;
@property (nonatomic) double timeToFirstTokenMillis;
@property (nonatomic) char hasTimeToFirstTokenMillis;
@property (nonatomic) double extendLatencyMillis;
@property (nonatomic) char hasExtendLatencyMillis;
@property (nonatomic) long long outputTokensCount;
@property (nonatomic) char hasOutputTokensCount;
@property (nonatomic) long long inputTokensCount;
@property (nonatomic) char hasInputTokensCount;
@property (retain, nonatomic) GMSSchemaGMSPrivateCloudSpeculativeDecodingMetrics *gmsPrivateCloudSpeculativeDecodingMetrics;
@property (nonatomic) char hasGmsPrivateCloudSpeculativeDecodingMetrics;
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
- (void)deleteTokenRate;
- (void)deleteExtendLatencyMillis;
- (void)deleteGmsPrivateCloudSpeculativeDecodingMetrics;
- (void)deleteInputTokensCount;
- (void)deleteOutputTokensCount;
- (void)deleteTimeToFirstTokenMillis;
- (id)suppressMessageUnderConditions;

@end
