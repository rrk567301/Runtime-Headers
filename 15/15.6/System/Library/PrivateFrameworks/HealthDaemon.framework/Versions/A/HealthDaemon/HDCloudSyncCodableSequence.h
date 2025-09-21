@class NSMutableArray, HDCodableSyncAnchorRangeMap;

@interface HDCloudSyncCodableSequence : PBCodable <NSCopying> {
    struct { unsigned char changeIndex : 1; unsigned char childRecordCount : 1; unsigned char epoch : 1; unsigned char protocolVersion : 1; unsigned char slot : 1; unsigned char active : 1; } _has;
}

@property (nonatomic) char hasSlot;
@property (nonatomic) int slot;
@property (nonatomic) char hasActive;
@property (nonatomic) char active;
@property (nonatomic) char hasEpoch;
@property (nonatomic) long long epoch;
@property (retain, nonatomic) NSMutableArray *includedStoreIdentifiers;
@property (retain, nonatomic) NSMutableArray *includedSyncIdentities;
@property (retain, nonatomic) NSMutableArray *includedChildSyncIdentities;
@property (nonatomic) char hasProtocolVersion;
@property (nonatomic) long long protocolVersion;
@property (readonly, nonatomic) char hasAnchorMap;
@property (retain, nonatomic) HDCodableSyncAnchorRangeMap *anchorMap;
@property (readonly, nonatomic) char hasFrozenAnchorMap;
@property (retain, nonatomic) HDCodableSyncAnchorRangeMap *frozenAnchorMap;
@property (nonatomic) char hasChangeIndex;
@property (nonatomic) long long changeIndex;
@property (nonatomic) char hasChildRecordCount;
@property (nonatomic) long long childRecordCount;
@property (retain, nonatomic) NSMutableArray *unfrozenChangeRecordNames;

+ (Class)includedChildSyncIdentitiesType;
+ (Class)includedStoreIdentifiersType;
+ (Class)includedSyncIdentitiesType;
+ (Class)unfrozenChangeRecordNamesType;

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
