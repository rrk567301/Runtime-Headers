@interface AWDWRMLinkPrefChange2 : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char count : 1; unsigned char nCallActive : 1; unsigned char nCallIdle : 1; unsigned char nCelluarBadEcio : 1; unsigned char nCelluarBadLQM : 1; unsigned char nCelluarBadRSRP : 1; unsigned char nCelluarBadSignal : 1; unsigned char nCellularNotReady : 1; unsigned char nData : 1; unsigned char nHandoverNotPerformed : 1; unsigned char nHandoverPerformed : 1; unsigned char nHandoverUnknown : 1; unsigned char nRunning : 1; unsigned char nStationary : 1; unsigned char nStatusUpdateDelayBin1 : 1; unsigned char nStatusUpdateDelayBin2 : 1; unsigned char nStatusUpdateDelayBin3 : 1; unsigned char nStatusUpdateDelayBin4 : 1; unsigned char nStatusUpdateDelayBin5 : 1; unsigned char nStatusUpdateDelayBin6 : 1; unsigned char nVehicular : 1; unsigned char nVoice : 1; unsigned char nWalking : 1; unsigned char nWifiGood : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) char hasCount;
@property (nonatomic) unsigned int count;
@property (nonatomic) char hasNCallIdle;
@property (nonatomic) unsigned int nCallIdle;
@property (nonatomic) char hasNCallActive;
@property (nonatomic) unsigned int nCallActive;
@property (nonatomic) char hasNData;
@property (nonatomic) unsigned int nData;
@property (nonatomic) char hasNVoice;
@property (nonatomic) unsigned int nVoice;
@property (nonatomic) char hasNStationary;
@property (nonatomic) unsigned int nStationary;
@property (nonatomic) char hasNWalking;
@property (nonatomic) unsigned int nWalking;
@property (nonatomic) char hasNRunning;
@property (nonatomic) unsigned int nRunning;
@property (nonatomic) char hasNVehicular;
@property (nonatomic) unsigned int nVehicular;
@property (nonatomic) char hasNWifiGood;
@property (nonatomic) unsigned int nWifiGood;
@property (nonatomic) char hasNCellularNotReady;
@property (nonatomic) unsigned int nCellularNotReady;
@property (nonatomic) char hasNCelluarBadSignal;
@property (nonatomic) unsigned int nCelluarBadSignal;
@property (nonatomic) char hasNCelluarBadRSRP;
@property (nonatomic) unsigned int nCelluarBadRSRP;
@property (nonatomic) char hasNCelluarBadLQM;
@property (nonatomic) unsigned int nCelluarBadLQM;
@property (nonatomic) char hasNCelluarBadEcio;
@property (nonatomic) unsigned int nCelluarBadEcio;
@property (nonatomic) char hasNHandoverPerformed;
@property (nonatomic) unsigned int nHandoverPerformed;
@property (nonatomic) char hasNHandoverNotPerformed;
@property (nonatomic) unsigned int nHandoverNotPerformed;
@property (nonatomic) char hasNHandoverUnknown;
@property (nonatomic) unsigned int nHandoverUnknown;
@property (nonatomic) char hasNStatusUpdateDelayBin1;
@property (nonatomic) unsigned int nStatusUpdateDelayBin1;
@property (nonatomic) char hasNStatusUpdateDelayBin2;
@property (nonatomic) unsigned int nStatusUpdateDelayBin2;
@property (nonatomic) char hasNStatusUpdateDelayBin3;
@property (nonatomic) unsigned int nStatusUpdateDelayBin3;
@property (nonatomic) char hasNStatusUpdateDelayBin4;
@property (nonatomic) unsigned int nStatusUpdateDelayBin4;
@property (nonatomic) char hasNStatusUpdateDelayBin5;
@property (nonatomic) unsigned int nStatusUpdateDelayBin5;
@property (nonatomic) char hasNStatusUpdateDelayBin6;
@property (nonatomic) unsigned int nStatusUpdateDelayBin6;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
