@class NSData, GMSSchemaGMSPrivateCloudSpeculativeDecodingMetrics;

@interface GMSSchemaGMSPrivateCloudMetrics : SISchemaInstrumentationMessage {
    struct { unsigned char tokenRate : 1; unsigned char timeToFirstTokenMillis : 1; unsigned char extendLatencyMillis : 1; unsigned char outputTokensCount : 1; unsigned char inputTokensCount : 1; } _has;
}

@property (nonatomic) double tokenRate;
@property (nonatomic) BOOL hasTokenRate;
@property (nonatomic) double timeToFirstTokenMillis;
@property (nonatomic) BOOL hasTimeToFirstTokenMillis;
@property (nonatomic) double extendLatencyMillis;
@property (nonatomic) BOOL hasExtendLatencyMillis;
@property (nonatomic) long long outputTokensCount;
@property (nonatomic) BOOL hasOutputTokensCount;
@property (nonatomic) long long inputTokensCount;
@property (nonatomic) BOOL hasInputTokensCount;
@property (retain, nonatomic) GMSSchemaGMSPrivateCloudSpeculativeDecodingMetrics *gmsPrivateCloudSpeculativeDecodingMetrics;
@property (nonatomic) BOOL hasGmsPrivateCloudSpeculativeDecodingMetrics;
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
- (void)deleteTokenRate;
- (void)deleteExtendLatencyMillis;
- (void)deleteGmsPrivateCloudSpeculativeDecodingMetrics;
- (void)deleteInputTokensCount;
- (void)deleteOutputTokensCount;
- (void)deleteTimeToFirstTokenMillis;

@end
