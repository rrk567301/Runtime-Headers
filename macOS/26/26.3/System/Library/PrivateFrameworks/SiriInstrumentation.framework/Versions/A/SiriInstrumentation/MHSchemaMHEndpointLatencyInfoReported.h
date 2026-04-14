@class MHSchemaMHTrailingPacketLatencyInfo, MHSchemaMHStatisticDistributionInfo, NSData;

@interface MHSchemaMHEndpointLatencyInfoReported : SISchemaInstrumentationMessage {
    struct { unsigned char firstPacketLatencyInNs : 1; } _has;
}

@property (nonatomic) unsigned long long firstPacketLatencyInNs;
@property (nonatomic) BOOL hasFirstPacketLatencyInNs;
@property (retain, nonatomic) MHSchemaMHTrailingPacketLatencyInfo *trailingPacketLatencyInfo;
@property (nonatomic) BOOL hasTrailingPacketLatencyInfo;
@property (retain, nonatomic) MHSchemaMHTrailingPacketLatencyInfo *coreSpeechTrailingPacketLatencyInfo;
@property (nonatomic) BOOL hasCoreSpeechTrailingPacketLatencyInfo;
@property (retain, nonatomic) MHSchemaMHStatisticDistributionInfo *trailingPacketLatency;
@property (nonatomic) BOOL hasTrailingPacketLatency;
@property (retain, nonatomic) MHSchemaMHStatisticDistributionInfo *coreSpeechTrailingPacketLatency;
@property (nonatomic) BOOL hasCoreSpeechTrailingPacketLatency;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteTrailingPacketLatencyInfo;
- (void)deleteCoreSpeechTrailingPacketLatency;
- (void)deleteCoreSpeechTrailingPacketLatencyInfo;
- (void)deleteFirstPacketLatencyInNs;
- (void)deleteTrailingPacketLatency;

@end
