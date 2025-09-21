@interface AWDWiFiNWActivityAggregateMetrics : PBCodable <NSCopying> {
    struct { unsigned char kCtlTxCTS : 1; unsigned char kCtlTxRTS : 1; unsigned char kMACRxDataFrameMatchingRA : 1; unsigned char kMACRxDataFrameOtherRA : 1; unsigned char kMACRxUnicastCTStoMAC : 1; unsigned char kMACRxUnicastCTStoOther : 1; unsigned char kMACRxUnicastRTStoMAC : 1; unsigned char kMACRxUnicastRTStoOther : 1; unsigned char kRxBadFCS : 1; unsigned char kRxBadPLCP : 1; unsigned char kRxCRCGlitch : 1; unsigned char kRxDataErrors : 1; unsigned char kRxFrames : 1; unsigned char kRxGoodPLCP : 1; unsigned char kRxRetryBitSet : 1; unsigned char kTxFrames : 1; unsigned char kTxRetransmission : 1; unsigned char kdot11MultipleRetryCount : 1; unsigned char kdot11RTSFailureCount : 1; unsigned char kdot11RTSSuccessCount : 1; unsigned char kdot11RetryCount : 1; unsigned char kMACRxControlFrameMatchingRA : 1; unsigned char kMACRxControlFrameOtherRA : 1; } _has;
}

@property (nonatomic) char hasKRxDataErrors;
@property (nonatomic) unsigned long long kRxDataErrors;
@property (nonatomic) char hasKRxFrames;
@property (nonatomic) unsigned long long kRxFrames;
@property (nonatomic) char hasKRxRetryBitSet;
@property (nonatomic) unsigned long long kRxRetryBitSet;
@property (nonatomic) char hasKMACRxDataFrameMatchingRA;
@property (nonatomic) unsigned long long kMACRxDataFrameMatchingRA;
@property (nonatomic) char hasKMACRxDataFrameOtherRA;
@property (nonatomic) unsigned long long kMACRxDataFrameOtherRA;
@property (nonatomic) char hasKMACRxControlFrameMatchingRA;
@property (nonatomic) unsigned int kMACRxControlFrameMatchingRA;
@property (nonatomic) char hasKMACRxControlFrameOtherRA;
@property (nonatomic) unsigned int kMACRxControlFrameOtherRA;
@property (nonatomic) char hasKRxGoodPLCP;
@property (nonatomic) unsigned long long kRxGoodPLCP;
@property (nonatomic) char hasKRxBadPLCP;
@property (nonatomic) unsigned long long kRxBadPLCP;
@property (nonatomic) char hasKRxBadFCS;
@property (nonatomic) unsigned long long kRxBadFCS;
@property (nonatomic) char hasKTxFrames;
@property (nonatomic) unsigned long long kTxFrames;
@property (nonatomic) char hasKTxRetransmission;
@property (nonatomic) unsigned long long kTxRetransmission;
@property (nonatomic) char hasKdot11RetryCount;
@property (nonatomic) unsigned long long kdot11RetryCount;
@property (nonatomic) char hasKdot11MultipleRetryCount;
@property (nonatomic) unsigned long long kdot11MultipleRetryCount;
@property (nonatomic) char hasKdot11RTSSuccessCount;
@property (nonatomic) unsigned long long kdot11RTSSuccessCount;
@property (nonatomic) char hasKdot11RTSFailureCount;
@property (nonatomic) unsigned long long kdot11RTSFailureCount;
@property (nonatomic) char hasKCtlTxRTS;
@property (nonatomic) unsigned long long kCtlTxRTS;
@property (nonatomic) char hasKRxCRCGlitch;
@property (nonatomic) unsigned long long kRxCRCGlitch;
@property (nonatomic) char hasKMACRxUnicastCTStoMAC;
@property (nonatomic) unsigned long long kMACRxUnicastCTStoMAC;
@property (nonatomic) char hasKMACRxUnicastCTStoOther;
@property (nonatomic) unsigned long long kMACRxUnicastCTStoOther;
@property (nonatomic) char hasKMACRxUnicastRTStoMAC;
@property (nonatomic) unsigned long long kMACRxUnicastRTStoMAC;
@property (nonatomic) char hasKMACRxUnicastRTStoOther;
@property (nonatomic) unsigned long long kMACRxUnicastRTStoOther;
@property (nonatomic) char hasKCtlTxCTS;
@property (nonatomic) unsigned long long kCtlTxCTS;

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
