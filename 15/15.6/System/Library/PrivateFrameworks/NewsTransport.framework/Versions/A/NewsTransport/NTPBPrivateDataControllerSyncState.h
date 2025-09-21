@class NSMutableArray;

@interface NTPBPrivateDataControllerSyncState : PBCodable <NSCopying> {
    struct { unsigned char version : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *zoneStates;
@property (retain, nonatomic) NSMutableArray *recordStates;
@property (nonatomic) char hasVersion;
@property (nonatomic) unsigned long long version;

+ (Class)recordStatesType;
+ (Class)zoneStatesType;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)clearZoneStates;
- (unsigned long long)zoneStatesCount;
- (void)addRecordStates:(id)a0;
- (void)addZoneStates:(id)a0;
- (void)clearRecordStates;
- (id)recordStatesAtIndex:(unsigned long long)a0;
- (unsigned long long)recordStatesCount;
- (id)zoneStatesAtIndex:(unsigned long long)a0;

@end
