@interface AWDWiFiMetricsManagerAutoJoinCumulative : PBCodable <NSCopying> {
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _excludedDueToAJBlacklistCounts;
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _scanTypesCounts;
    struct { unsigned char timestamp : 1; unsigned char ajScansPerformedWithLocation : 1; unsigned char ajScansPerformedWithoutLocation : 1; unsigned char bandScanCount24 : 1; unsigned char bandScanCount5 : 1; unsigned char ccaBitmap : 1; unsigned char didAssocTo5GHzAfterBroadcastPeriodicAllBandScanCount : 1; unsigned char rssiBitmap : 1; unsigned char userChoseToAssociateToAJBlacklistedCount : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) unsigned long long scanTypesCountsCount;
@property (readonly, nonatomic) unsigned int *scanTypesCounts;
@property (readonly, nonatomic) unsigned long long excludedDueToAJBlacklistCountsCount;
@property (readonly, nonatomic) unsigned int *excludedDueToAJBlacklistCounts;
@property (nonatomic) char hasUserChoseToAssociateToAJBlacklistedCount;
@property (nonatomic) unsigned int userChoseToAssociateToAJBlacklistedCount;
@property (nonatomic) char hasAjScansPerformedWithLocation;
@property (nonatomic) unsigned int ajScansPerformedWithLocation;
@property (nonatomic) char hasAjScansPerformedWithoutLocation;
@property (nonatomic) unsigned int ajScansPerformedWithoutLocation;
@property (nonatomic) char hasDidAssocTo5GHzAfterBroadcastPeriodicAllBandScanCount;
@property (nonatomic) unsigned int didAssocTo5GHzAfterBroadcastPeriodicAllBandScanCount;
@property (nonatomic) char hasRssiBitmap;
@property (nonatomic) unsigned int rssiBitmap;
@property (nonatomic) char hasCcaBitmap;
@property (nonatomic) unsigned int ccaBitmap;
@property (nonatomic) char hasBandScanCount24;
@property (nonatomic) unsigned int bandScanCount24;
@property (nonatomic) char hasBandScanCount5;
@property (nonatomic) unsigned int bandScanCount5;

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
- (void)addExcludedDueToAJBlacklistCount:(unsigned int)a0;
- (void)addScanTypesCount:(unsigned int)a0;
- (void)clearExcludedDueToAJBlacklistCounts;
- (void)clearScanTypesCounts;
- (unsigned int)excludedDueToAJBlacklistCountAtIndex:(unsigned long long)a0;
- (unsigned int)scanTypesCountAtIndex:(unsigned long long)a0;
- (void)setExcludedDueToAJBlacklistCounts:(unsigned int *)a0 count:(unsigned long long)a1;
- (void)setScanTypesCounts:(unsigned int *)a0 count:(unsigned long long)a1;

@end
