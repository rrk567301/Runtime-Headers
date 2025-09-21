@class GMSSchemaGMSPrivateCloudMetrics, NSData, SISchemaUUID;

@interface GMSSchemaGMSPrivateCloudMetricsReceived : SISchemaInstrumentationMessage {
    struct { unsigned char gmsCaller : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *clientTraceId;
@property (nonatomic) char hasClientTraceId;
@property (retain, nonatomic) GMSSchemaGMSPrivateCloudMetrics *gmsPrivateCloudMetrics;
@property (nonatomic) char hasGmsPrivateCloudMetrics;
@property (nonatomic) int gmsCaller;
@property (nonatomic) char hasGmsCaller;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteGmsCaller;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteClientTraceId;
- (void)deleteGmsPrivateCloudMetrics;
- (id)suppressMessageUnderConditions;

@end
