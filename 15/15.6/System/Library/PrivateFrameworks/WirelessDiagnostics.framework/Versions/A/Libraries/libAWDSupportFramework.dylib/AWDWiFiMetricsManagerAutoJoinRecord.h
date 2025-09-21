@class NSMutableArray;

@interface AWDWiFiMetricsManagerAutoJoinRecord : PBCodable <NSCopying> {
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _scannedNetworksExcludedFromAJDueToBlacklistReasonCounts;
    struct { unsigned char beganTimestamp : 1; unsigned char endedTimestamp : 1; unsigned char enteredKnownNetworkGeotagLocationTimeStamp : 1; unsigned char timestamp : 1; unsigned char wakeTimestamp : 1; unsigned char bandExclusionReason : 1; unsigned char bandScanCount24 : 1; unsigned char bandScanCount5 : 1; unsigned char ccaBitmap : 1; unsigned char knownNetworksFoundInScans : 1; unsigned char lastScanError : 1; unsigned char lastScanType : 1; unsigned char nwExclusionCount : 1; unsigned char resetReason : 1; unsigned char resetTypes : 1; unsigned char retryIndex : 1; unsigned char rssiBitmap : 1; unsigned char scanResultFound : 1; unsigned char scanTypes : 1; unsigned char state : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) char hasBeganTimestamp;
@property (nonatomic) unsigned long long beganTimestamp;
@property (nonatomic) char hasEndedTimestamp;
@property (nonatomic) unsigned long long endedTimestamp;
@property (nonatomic) char hasWakeTimestamp;
@property (nonatomic) unsigned long long wakeTimestamp;
@property (nonatomic) char hasEnteredKnownNetworkGeotagLocationTimeStamp;
@property (nonatomic) unsigned long long enteredKnownNetworkGeotagLocationTimeStamp;
@property (nonatomic) char hasState;
@property (nonatomic) unsigned int state;
@property (nonatomic) char hasRetryIndex;
@property (nonatomic) unsigned int retryIndex;
@property (readonly, nonatomic) unsigned long long scannedNetworksExcludedFromAJDueToBlacklistReasonCountsCount;
@property (readonly, nonatomic) unsigned int *scannedNetworksExcludedFromAJDueToBlacklistReasonCounts;
@property (nonatomic) char hasScanTypes;
@property (nonatomic) unsigned int scanTypes;
@property (nonatomic) char hasLastScanType;
@property (nonatomic) unsigned int lastScanType;
@property (nonatomic) char hasResetTypes;
@property (nonatomic) unsigned int resetTypes;
@property (nonatomic) char hasResetReason;
@property (nonatomic) unsigned int resetReason;
@property (nonatomic) char hasScanResultFound;
@property (nonatomic) unsigned int scanResultFound;
@property (nonatomic) char hasKnownNetworksFoundInScans;
@property (nonatomic) unsigned int knownNetworksFoundInScans;
@property (nonatomic) char hasLastScanError;
@property (nonatomic) unsigned int lastScanError;
@property (nonatomic) char hasRssiBitmap;
@property (nonatomic) unsigned int rssiBitmap;
@property (nonatomic) char hasCcaBitmap;
@property (nonatomic) unsigned int ccaBitmap;
@property (nonatomic) char hasBandScanCount24;
@property (nonatomic) unsigned int bandScanCount24;
@property (nonatomic) char hasBandScanCount5;
@property (nonatomic) unsigned int bandScanCount5;
@property (nonatomic) char hasNwExclusionCount;
@property (nonatomic) unsigned int nwExclusionCount;
@property (retain, nonatomic) NSMutableArray *networksExcludedFromAJDueToThresholds;
@property (nonatomic) char hasBandExclusionReason;
@property (nonatomic) unsigned int bandExclusionReason;

+ (Class)networksExcludedFromAJDueToThresholdsType;

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
- (unsigned int)scannedNetworksExcludedFromAJDueToBlacklistReasonCountsAtIndex:(unsigned long long)a0;
- (void)addNetworksExcludedFromAJDueToThresholds:(id)a0;
- (void)addScannedNetworksExcludedFromAJDueToBlacklistReasonCounts:(unsigned int)a0;
- (void)clearNetworksExcludedFromAJDueToThresholds;
- (void)clearScannedNetworksExcludedFromAJDueToBlacklistReasonCounts;
- (id)networksExcludedFromAJDueToThresholdsAtIndex:(unsigned long long)a0;
- (unsigned long long)networksExcludedFromAJDueToThresholdsCount;
- (void)setScannedNetworksExcludedFromAJDueToBlacklistReasonCounts:(unsigned int *)a0 count:(unsigned long long)a1;

@end
