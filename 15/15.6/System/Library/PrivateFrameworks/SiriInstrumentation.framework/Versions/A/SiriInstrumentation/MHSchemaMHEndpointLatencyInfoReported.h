@class MHSchemaMHTrailingPacketLatencyInfo, MHSchemaMHStatisticDistributionInfo, NSData;

@interface MHSchemaMHEndpointLatencyInfoReported : SISchemaInstrumentationMessage {
    struct { unsigned char firstPacketLatencyInNs : 1; } _has;
}

@property (nonatomic) unsigned long long firstPacketLatencyInNs;
@property (nonatomic) char hasFirstPacketLatencyInNs;
@property (retain, nonatomic) MHSchemaMHTrailingPacketLatencyInfo *trailingPacketLatencyInfo;
@property (nonatomic) char hasTrailingPacketLatencyInfo;
@property (retain, nonatomic) MHSchemaMHTrailingPacketLatencyInfo *coreSpeechTrailingPacketLatencyInfo;
@property (nonatomic) char hasCoreSpeechTrailingPacketLatencyInfo;
@property (retain, nonatomic) MHSchemaMHStatisticDistributionInfo *trailingPacketLatency;
@property (nonatomic) char hasTrailingPacketLatency;
@property (retain, nonatomic) MHSchemaMHStatisticDistributionInfo *coreSpeechTrailingPacketLatency;
@property (nonatomic) char hasCoreSpeechTrailingPacketLatency;
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
- (void)deleteTrailingPacketLatencyInfo;
- (void)deleteCoreSpeechTrailingPacketLatency;
- (void)deleteCoreSpeechTrailingPacketLatencyInfo;
- (void)deleteFirstPacketLatencyInNs;
- (void)deleteTrailingPacketLatency;
- (id)suppressMessageUnderConditions;

@end
