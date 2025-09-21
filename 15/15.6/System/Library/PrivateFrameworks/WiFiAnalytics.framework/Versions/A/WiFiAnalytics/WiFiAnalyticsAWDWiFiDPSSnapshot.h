@class WiFiAnalyticsAWDWiFiDPSAWDLSnapshot, WiFiAnalyticsAWDWiFiDPSPerACTxCompletionSnapshot, WiFiAnalyticsAWDWiFiDPSBTSnapshot, WiFiAnalyticsAWDWiFiUsageSnapshot;

@interface WiFiAnalyticsAWDWiFiDPSSnapshot : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasTxCompletionSnapshotBE;
@property (retain, nonatomic) WiFiAnalyticsAWDWiFiDPSPerACTxCompletionSnapshot *txCompletionSnapshotBE;
@property (readonly, nonatomic) char hasTxCompletionSnapshotBK;
@property (retain, nonatomic) WiFiAnalyticsAWDWiFiDPSPerACTxCompletionSnapshot *txCompletionSnapshotBK;
@property (readonly, nonatomic) char hasTxCompletionSnapshotVO;
@property (retain, nonatomic) WiFiAnalyticsAWDWiFiDPSPerACTxCompletionSnapshot *txCompletionSnapshotVO;
@property (readonly, nonatomic) char hasTxCompletionSnapshotVI;
@property (retain, nonatomic) WiFiAnalyticsAWDWiFiDPSPerACTxCompletionSnapshot *txCompletionSnapshotVI;
@property (readonly, nonatomic) char hasBtSnapshot;
@property (retain, nonatomic) WiFiAnalyticsAWDWiFiDPSBTSnapshot *btSnapshot;
@property (readonly, nonatomic) char hasAwdlSnapshot;
@property (retain, nonatomic) WiFiAnalyticsAWDWiFiDPSAWDLSnapshot *awdlSnapshot;
@property (readonly, nonatomic) char hasRc1Snapshot;
@property (retain, nonatomic) WiFiAnalyticsAWDWiFiUsageSnapshot *rc1Snapshot;
@property (readonly, nonatomic) char hasRc2Snapshot;
@property (retain, nonatomic) WiFiAnalyticsAWDWiFiUsageSnapshot *rc2Snapshot;
@property (readonly, nonatomic) char hasLteSnapshot;
@property (retain, nonatomic) WiFiAnalyticsAWDWiFiUsageSnapshot *lteSnapshot;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
