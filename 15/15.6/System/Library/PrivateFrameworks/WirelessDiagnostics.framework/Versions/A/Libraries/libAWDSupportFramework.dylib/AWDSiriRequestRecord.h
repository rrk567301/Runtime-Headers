@class NSMutableArray;

@interface AWDSiriRequestRecord : PBCodable <NSCopying> {
    struct { unsigned char btRetransmissionRateRx : 1; unsigned char btRetransmissionRateTx : 1; unsigned char btRssi : 1; unsigned char btTech : 1; unsigned char endTimestamp : 1; unsigned char expectedThroughputVIBE : 1; unsigned char iRATRecommendationDelay : 1; unsigned char lsmRecommendationBe : 1; unsigned char packetLifetimeVIBE : 1; unsigned char packetLossRateVIBE : 1; unsigned char startTimestamp : 1; unsigned char timeToFirstWord : 1; unsigned char wifiCCA : 1; unsigned char wifiRSSI : 1; unsigned char wifiSNR : 1; unsigned char beaconPer : 1; unsigned char errorCode : 1; unsigned char errorDomain : 1; unsigned char iRATRecommendation : 1; unsigned char idsErrorCode : 1; unsigned char idsMessageDelay : 1; unsigned char idsSocketDelay : 1; unsigned char nwtype : 1; unsigned char requestStatus : 1; unsigned char underlyingErrorCode : 1; unsigned char underlyingErrorDomain : 1; } _has;
}

@property (nonatomic) char hasStartTimestamp;
@property (nonatomic) unsigned long long startTimestamp;
@property (nonatomic) char hasEndTimestamp;
@property (nonatomic) unsigned long long endTimestamp;
@property (nonatomic) char hasRequestStatus;
@property (nonatomic) int requestStatus;
@property (nonatomic) char hasErrorDomain;
@property (nonatomic) int errorDomain;
@property (nonatomic) char hasErrorCode;
@property (nonatomic) int errorCode;
@property (nonatomic) char hasUnderlyingErrorDomain;
@property (nonatomic) int underlyingErrorDomain;
@property (nonatomic) char hasUnderlyingErrorCode;
@property (nonatomic) int underlyingErrorCode;
@property (nonatomic) char hasTimeToFirstWord;
@property (nonatomic) unsigned long long timeToFirstWord;
@property (nonatomic) char hasIRATRecommendation;
@property (nonatomic) int iRATRecommendation;
@property (nonatomic) char hasIRATRecommendationDelay;
@property (nonatomic) unsigned long long iRATRecommendationDelay;
@property (retain, nonatomic) NSMutableArray *transportHistorys;
@property (nonatomic) char hasWifiRSSI;
@property (nonatomic) long long wifiRSSI;
@property (nonatomic) char hasWifiSNR;
@property (nonatomic) long long wifiSNR;
@property (nonatomic) char hasWifiCCA;
@property (nonatomic) long long wifiCCA;
@property (nonatomic) char hasBeaconPer;
@property (nonatomic) unsigned int beaconPer;
@property (nonatomic) char hasNwtype;
@property (nonatomic) unsigned int nwtype;
@property (nonatomic) char hasLsmRecommendationBe;
@property (nonatomic) long long lsmRecommendationBe;
@property (nonatomic) char hasExpectedThroughputVIBE;
@property (nonatomic) long long expectedThroughputVIBE;
@property (nonatomic) char hasPacketLifetimeVIBE;
@property (nonatomic) long long packetLifetimeVIBE;
@property (nonatomic) char hasPacketLossRateVIBE;
@property (nonatomic) long long packetLossRateVIBE;
@property (nonatomic) char hasBtRssi;
@property (nonatomic) unsigned long long btRssi;
@property (nonatomic) char hasBtRetransmissionRateTx;
@property (nonatomic) long long btRetransmissionRateTx;
@property (nonatomic) char hasBtRetransmissionRateRx;
@property (nonatomic) long long btRetransmissionRateRx;
@property (nonatomic) char hasBtTech;
@property (nonatomic) long long btTech;
@property (nonatomic) char hasIdsMessageDelay;
@property (nonatomic) unsigned int idsMessageDelay;
@property (nonatomic) char hasIdsSocketDelay;
@property (nonatomic) unsigned int idsSocketDelay;
@property (nonatomic) char hasIdsErrorCode;
@property (nonatomic) unsigned int idsErrorCode;

+ (Class)transportHistoryType;

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
- (int)StringAsErrorDomain:(id)a0;
- (int)StringAsRequestStatus:(id)a0;
- (int)StringAsIRATRecommendation:(id)a0;
- (int)StringAsUnderlyingErrorDomain:(id)a0;
- (void)addTransportHistory:(id)a0;
- (void)clearTransportHistorys;
- (id)errorDomainAsString:(int)a0;
- (id)iRATRecommendationAsString:(int)a0;
- (id)requestStatusAsString:(int)a0;
- (id)transportHistoryAtIndex:(unsigned long long)a0;
- (unsigned long long)transportHistorysCount;
- (id)underlyingErrorDomainAsString:(int)a0;

@end
