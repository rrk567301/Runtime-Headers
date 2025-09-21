@interface WiFiAnalyticsAWDWiFiNWActivityOMI : PBCodable <NSCopying> {
    struct { unsigned char chBWAck : 1; unsigned char chBWReq : 1; unsigned char completionDelay : 1; unsigned char dLResoundAck : 1; unsigned char dLResoundReq : 1; unsigned char eRSUAck : 1; unsigned char eRSUReq : 1; unsigned char retries : 1; unsigned char rxNSSAck : 1; unsigned char rxNSSReq : 1; unsigned char scheduled : 1; unsigned char success : 1; unsigned char txNSTSAck : 1; unsigned char txNSTSReq : 1; unsigned char uLMUAck : 1; unsigned char uLMUReq : 1; } _has;
}

@property (nonatomic) char hasScheduled;
@property (nonatomic) unsigned int scheduled;
@property (nonatomic) char hasSuccess;
@property (nonatomic) unsigned int success;
@property (nonatomic) char hasRetries;
@property (nonatomic) unsigned int retries;
@property (nonatomic) char hasCompletionDelay;
@property (nonatomic) unsigned int completionDelay;
@property (nonatomic) char hasULMUReq;
@property (nonatomic) unsigned int uLMUReq;
@property (nonatomic) char hasULMUAck;
@property (nonatomic) unsigned int uLMUAck;
@property (nonatomic) char hasTxNSTSReq;
@property (nonatomic) unsigned int txNSTSReq;
@property (nonatomic) char hasTxNSTSAck;
@property (nonatomic) unsigned int txNSTSAck;
@property (nonatomic) char hasRxNSSReq;
@property (nonatomic) unsigned int rxNSSReq;
@property (nonatomic) char hasRxNSSAck;
@property (nonatomic) unsigned int rxNSSAck;
@property (nonatomic) char hasChBWReq;
@property (nonatomic) unsigned int chBWReq;
@property (nonatomic) char hasChBWAck;
@property (nonatomic) unsigned int chBWAck;
@property (nonatomic) char hasERSUReq;
@property (nonatomic) unsigned int eRSUReq;
@property (nonatomic) char hasERSUAck;
@property (nonatomic) unsigned int eRSUAck;
@property (nonatomic) char hasDLResoundReq;
@property (nonatomic) unsigned int dLResoundReq;
@property (nonatomic) char hasDLResoundAck;
@property (nonatomic) unsigned int dLResoundAck;

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
