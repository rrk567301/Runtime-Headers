@class AWDWiFiDPSAWDLSnapshot, AWDWiFiDPSBTSnapshot, AWDWiFiDPSPerACTxCompletionSnapshot, AWDWiFiUsageSnapshot;

@interface AWDWiFiDPSSnapshot : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasTxCompletionSnapshotBE;
@property (retain, nonatomic) AWDWiFiDPSPerACTxCompletionSnapshot *txCompletionSnapshotBE;
@property (readonly, nonatomic) char hasTxCompletionSnapshotBK;
@property (retain, nonatomic) AWDWiFiDPSPerACTxCompletionSnapshot *txCompletionSnapshotBK;
@property (readonly, nonatomic) char hasTxCompletionSnapshotVO;
@property (retain, nonatomic) AWDWiFiDPSPerACTxCompletionSnapshot *txCompletionSnapshotVO;
@property (readonly, nonatomic) char hasTxCompletionSnapshotVI;
@property (retain, nonatomic) AWDWiFiDPSPerACTxCompletionSnapshot *txCompletionSnapshotVI;
@property (readonly, nonatomic) char hasBtSnapshot;
@property (retain, nonatomic) AWDWiFiDPSBTSnapshot *btSnapshot;
@property (readonly, nonatomic) char hasAwdlSnapshot;
@property (retain, nonatomic) AWDWiFiDPSAWDLSnapshot *awdlSnapshot;
@property (readonly, nonatomic) char hasRc1Snapshot;
@property (retain, nonatomic) AWDWiFiUsageSnapshot *rc1Snapshot;
@property (readonly, nonatomic) char hasRc2Snapshot;
@property (retain, nonatomic) AWDWiFiUsageSnapshot *rc2Snapshot;
@property (readonly, nonatomic) char hasLteSnapshot;
@property (retain, nonatomic) AWDWiFiUsageSnapshot *lteSnapshot;

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

@end
