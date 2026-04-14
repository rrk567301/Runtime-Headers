@class HDCodableSyncEntityVersionMap, NSMutableArray, HDCodableSyncAnchorRangeMap;

@interface HDCloudSyncCodableSequence : PBCodable <NSCopying> {
    struct { unsigned char changeIndex : 1; unsigned char childRecordCount : 1; unsigned char epoch : 1; unsigned char protocolVersion : 1; unsigned char slot : 1; unsigned char active : 1; } _has;
}

@property (nonatomic) BOOL hasSlot;
@property (nonatomic) int slot;
@property (nonatomic) BOOL hasActive;
@property (nonatomic) BOOL active;
@property (nonatomic) BOOL hasEpoch;
@property (nonatomic) long long epoch;
@property (retain, nonatomic) NSMutableArray *includedStoreIdentifiers;
@property (retain, nonatomic) NSMutableArray *includedSyncIdentities;
@property (retain, nonatomic) NSMutableArray *includedChildSyncIdentities;
@property (nonatomic) BOOL hasProtocolVersion;
@property (nonatomic) long long protocolVersion;
@property (readonly, nonatomic) BOOL hasAnchorMap;
@property (retain, nonatomic) HDCodableSyncAnchorRangeMap *anchorMap;
@property (readonly, nonatomic) BOOL hasFrozenAnchorMap;
@property (retain, nonatomic) HDCodableSyncAnchorRangeMap *frozenAnchorMap;
@property (nonatomic) BOOL hasChangeIndex;
@property (nonatomic) long long changeIndex;
@property (nonatomic) BOOL hasChildRecordCount;
@property (nonatomic) long long childRecordCount;
@property (retain, nonatomic) NSMutableArray *unfrozenChangeRecordNames;
@property (readonly, nonatomic) BOOL hasSyncEntityVersionMap;
@property (retain, nonatomic) HDCodableSyncEntityVersionMap *syncEntityVersionMap;

+ (Class)includedChildSyncIdentitiesType;
+ (Class)includedStoreIdentifiersType;
+ (Class)includedSyncIdentitiesType;
+ (Class)unfrozenChangeRecordNamesType;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (int)StringAsSlot:(id)a0;
- (void)addIncludedChildSyncIdentities:(id)a0;
- (void)addIncludedStoreIdentifiers:(id)a0;
- (void)addIncludedSyncIdentities:(id)a0;
- (void)addUnfrozenChangeRecordNames:(id)a0;
- (void)clearIncludedChildSyncIdentities;
- (void)clearIncludedStoreIdentifiers;
- (void)clearIncludedSyncIdentities;
- (void)clearUnfrozenChangeRecordNames;
- (id)includedChildSyncIdentitiesAtIndex:(unsigned long long)a0;
- (unsigned long long)includedChildSyncIdentitiesCount;
- (id)includedStoreIdentifiersAtIndex:(unsigned long long)a0;
- (unsigned long long)includedStoreIdentifiersCount;
- (id)includedSyncIdentitiesAtIndex:(unsigned long long)a0;
- (unsigned long long)includedSyncIdentitiesCount;
- (id)slotAsString:(int)a0;
- (id)unfrozenChangeRecordNamesAtIndex:(unsigned long long)a0;
- (unsigned long long)unfrozenChangeRecordNamesCount;

@end
