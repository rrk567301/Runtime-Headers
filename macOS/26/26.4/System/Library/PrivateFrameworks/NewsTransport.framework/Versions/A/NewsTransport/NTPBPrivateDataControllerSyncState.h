@class NSMutableArray;

@interface NTPBPrivateDataControllerSyncState : PBCodable <NSCopying> {
    struct { unsigned char version : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *zoneStates;
@property (retain, nonatomic) NSMutableArray *recordStates;
@property (nonatomic) BOOL hasVersion;
@property (nonatomic) unsigned long long version;

+ (Class)recordStatesType;
+ (Class)zoneStatesType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (void)dealloc;
- (unsigned long long)zoneStatesCount;
- (void)clearZoneStates;
- (void)addRecordStates:(id)a0;
- (void)addZoneStates:(id)a0;
- (void)clearRecordStates;
- (id)recordStatesAtIndex:(unsigned long long)a0;
- (unsigned long long)recordStatesCount;
- (id)zoneStatesAtIndex:(unsigned long long)a0;

@end
