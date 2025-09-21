@class NSMutableArray;

@interface AWDWiFiMetricsManagerRangingReport : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char awdlLatency : 1; unsigned char numMeasurements : 1; unsigned char peerMasterChannel : 1; unsigned char peerPreferredChannel : 1; unsigned char peerPreferredChannelFlags : 1; unsigned char protocolVersion : 1; unsigned char rangingBandwidth : 1; unsigned char rangingChannel : 1; unsigned char rangingChannelQuality : 1; unsigned char rangingLatency : 1; unsigned char resultFlags : 1; unsigned char resultStatus : 1; unsigned char selfMasterChannel : 1; unsigned char selfPreferredChannel : 1; unsigned char selfPreferredChannelFlags : 1; unsigned char validCount : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) char hasSelfPreferredChannel;
@property (nonatomic) unsigned int selfPreferredChannel;
@property (nonatomic) char hasSelfPreferredChannelFlags;
@property (nonatomic) unsigned int selfPreferredChannelFlags;
@property (nonatomic) char hasSelfMasterChannel;
@property (nonatomic) unsigned int selfMasterChannel;
@property (nonatomic) char hasPeerPreferredChannel;
@property (nonatomic) unsigned int peerPreferredChannel;
@property (nonatomic) char hasPeerPreferredChannelFlags;
@property (nonatomic) unsigned int peerPreferredChannelFlags;
@property (nonatomic) char hasPeerMasterChannel;
@property (nonatomic) unsigned int peerMasterChannel;
@property (nonatomic) char hasProtocolVersion;
@property (nonatomic) unsigned int protocolVersion;
@property (nonatomic) char hasRangingChannel;
@property (nonatomic) unsigned int rangingChannel;
@property (nonatomic) char hasRangingBandwidth;
@property (nonatomic) unsigned int rangingBandwidth;
@property (nonatomic) char hasResultFlags;
@property (nonatomic) unsigned int resultFlags;
@property (nonatomic) char hasResultStatus;
@property (nonatomic) unsigned int resultStatus;
@property (nonatomic) char hasValidCount;
@property (nonatomic) unsigned int validCount;
@property (nonatomic) char hasNumMeasurements;
@property (nonatomic) unsigned int numMeasurements;
@property (nonatomic) char hasAwdlLatency;
@property (nonatomic) unsigned int awdlLatency;
@property (nonatomic) char hasRangingLatency;
@property (nonatomic) unsigned int rangingLatency;
@property (retain, nonatomic) NSMutableArray *rttSamples;
@property (nonatomic) char hasRangingChannelQuality;
@property (nonatomic) unsigned int rangingChannelQuality;

+ (Class)rttSamplesType;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)clearRttSamples;
- (unsigned long long)rttSamplesCount;
- (void)addRttSamples:(id)a0;
- (id)rttSamplesAtIndex:(unsigned long long)a0;

@end
