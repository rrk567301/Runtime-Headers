@interface AWDWiFiTDMSlice : PBCodable <NSCopying> {
    struct { unsigned char txDeferDuration : 1; unsigned char txPriDuration : 1; unsigned char txaDuration : 1; unsigned char ackTxPowerBackoffCount : 1; unsigned char txDeferredCount : 1; unsigned char txMuteCount : 1; unsigned char txPathEnableReqCount : 1; unsigned char txPathMuteCount : 1; unsigned char txPriorityCount : 1; unsigned char txaONCount : 1; unsigned char txaPORCount : 1; unsigned char txaTimeoutCount : 1; } _has;
}

@property (nonatomic) char hasTxaONCount;
@property (nonatomic) unsigned int txaONCount;
@property (nonatomic) char hasTxaTimeoutCount;
@property (nonatomic) unsigned int txaTimeoutCount;
@property (nonatomic) char hasTxaPORCount;
@property (nonatomic) unsigned int txaPORCount;
@property (nonatomic) char hasTxPathEnableReqCount;
@property (nonatomic) unsigned int txPathEnableReqCount;
@property (nonatomic) char hasTxPathMuteCount;
@property (nonatomic) unsigned int txPathMuteCount;
@property (nonatomic) char hasTxPriorityCount;
@property (nonatomic) unsigned int txPriorityCount;
@property (nonatomic) char hasTxDeferredCount;
@property (nonatomic) unsigned int txDeferredCount;
@property (nonatomic) char hasTxMuteCount;
@property (nonatomic) unsigned int txMuteCount;
@property (nonatomic) char hasAckTxPowerBackoffCount;
@property (nonatomic) unsigned int ackTxPowerBackoffCount;
@property (nonatomic) char hasTxaDuration;
@property (nonatomic) unsigned long long txaDuration;
@property (nonatomic) char hasTxPriDuration;
@property (nonatomic) unsigned long long txPriDuration;
@property (nonatomic) char hasTxDeferDuration;
@property (nonatomic) unsigned long long txDeferDuration;

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
