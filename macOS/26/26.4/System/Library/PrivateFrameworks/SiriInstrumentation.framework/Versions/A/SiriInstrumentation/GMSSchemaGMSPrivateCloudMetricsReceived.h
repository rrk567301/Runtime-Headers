@class GMSSchemaGMSPrivateCloudMetrics, NSData, SISchemaUUID;

@interface GMSSchemaGMSPrivateCloudMetricsReceived : SISchemaInstrumentationMessage {
    struct { unsigned char gmsCaller : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *clientTraceId;
@property (nonatomic) BOOL hasClientTraceId;
@property (retain, nonatomic) GMSSchemaGMSPrivateCloudMetrics *gmsPrivateCloudMetrics;
@property (nonatomic) BOOL hasGmsPrivateCloudMetrics;
@property (nonatomic) int gmsCaller;
@property (nonatomic) BOOL hasGmsCaller;
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
- (void)deleteGmsCaller;
- (void)deleteClientTraceId;
- (void)deleteGmsPrivateCloudMetrics;

@end
