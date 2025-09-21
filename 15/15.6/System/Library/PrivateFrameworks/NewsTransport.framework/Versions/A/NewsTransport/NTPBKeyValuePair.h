@class NTPBDate, NTPBReadingHistoryItem, NTPBIssueReadingHistoryItem, NTPBPrivateDataControllerSyncState, NTPBAppConfigurationResource, NTPBNetworkSessionList, NTPBAudioPlaylistItem, NSString, NTPBPersonalizationLocalData, NTPBAsset, NTPBAVAsset, NSData, NTPBCacheCoordinatorHints, NTPBAVAssetKey;

@interface NTPBKeyValuePair : PBCodable <NSCopying> {
    struct { unsigned char valueType : 1; } _has;
}

@property (readonly, nonatomic) char hasKey;
@property (retain, nonatomic) NSString *key;
@property (nonatomic) char hasValueType;
@property (nonatomic) int valueType;
@property (readonly, nonatomic) char hasDataValue;
@property (retain, nonatomic) NSData *dataValue;
@property (readonly, nonatomic) char hasStringValue;
@property (retain, nonatomic) NSString *stringValue;
@property (readonly, nonatomic) char hasDateValue;
@property (retain, nonatomic) NTPBDate *dateValue;
@property (readonly, nonatomic) char hasCacheCoordinatorHintsValue;
@property (retain, nonatomic) NTPBCacheCoordinatorHints *cacheCoordinatorHintsValue;
@property (readonly, nonatomic) char hasRecordData;
@property (retain, nonatomic) NSData *recordData;
@property (readonly, nonatomic) char hasReadingHistoryItem;
@property (retain, nonatomic) NTPBReadingHistoryItem *readingHistoryItem;
@property (readonly, nonatomic) char hasNetworkSessionList;
@property (retain, nonatomic) NTPBNetworkSessionList *networkSessionList;
@property (readonly, nonatomic) char hasPersonalizationLocalData;
@property (retain, nonatomic) NTPBPersonalizationLocalData *personalizationLocalData;
@property (readonly, nonatomic) char hasAppConfigurationResource;
@property (retain, nonatomic) NTPBAppConfigurationResource *appConfigurationResource;
@property (readonly, nonatomic) char hasPrivateDataControllerSyncState;
@property (retain, nonatomic) NTPBPrivateDataControllerSyncState *privateDataControllerSyncState;
@property (readonly, nonatomic) char hasIssueReadingHistoryItem;
@property (retain, nonatomic) NTPBIssueReadingHistoryItem *issueReadingHistoryItem;
@property (readonly, nonatomic) char hasAsset;
@property (retain, nonatomic) NTPBAsset *asset;
@property (readonly, nonatomic) char hasAudioPlaylistItem;
@property (retain, nonatomic) NTPBAudioPlaylistItem *audioPlaylistItem;
@property (readonly, nonatomic) char hasAvAsset;
@property (retain, nonatomic) NTPBAVAsset *avAsset;
@property (readonly, nonatomic) char hasAvAssetKey;
@property (retain, nonatomic) NTPBAVAssetKey *avAssetKey;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
