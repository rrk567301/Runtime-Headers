@class CLPMeta, NSMutableArray;

@interface CLPCellWifiCollectionRequest : PBRequest <NSCopying>

@property (retain, nonatomic) CLPMeta *meta;
@property (retain, nonatomic) NSMutableArray *cellTowerLocations;
@property (retain, nonatomic) NSMutableArray *cdmaCellTowerLocations;
@property (retain, nonatomic) NSMutableArray *lteCellTowerLocations;
@property (retain, nonatomic) NSMutableArray *nrCellTowerLocations;
@property (retain, nonatomic) NSMutableArray *wifiAPLocations;
@property (retain, nonatomic) NSMutableArray *scdmaCellTowerLocations;
@property (retain, nonatomic) NSMutableArray *cellOutOfServiceInfos;

+ (Class)cellTowerLocationType;
+ (Class)cdmaCellTowerLocationType;
+ (Class)lteCellTowerLocationType;
+ (Class)nrCellTowerLocationType;
+ (Class)wifiAPLocationType;
+ (Class)scdmaCellTowerLocationType;
+ (Class)cellOutOfServiceInfoType;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)clearCellTowerLocations;
- (void)addCellTowerLocation:(id)a0;
- (unsigned long long)cellTowerLocationsCount;
- (id)cellTowerLocationAtIndex:(unsigned long long)a0;
- (void)clearCdmaCellTowerLocations;
- (void)addCdmaCellTowerLocation:(id)a0;
- (unsigned long long)cdmaCellTowerLocationsCount;
- (id)cdmaCellTowerLocationAtIndex:(unsigned long long)a0;
- (void)clearLteCellTowerLocations;
- (void)addLteCellTowerLocation:(id)a0;
- (unsigned long long)lteCellTowerLocationsCount;
- (id)lteCellTowerLocationAtIndex:(unsigned long long)a0;
- (void)clearNrCellTowerLocations;
- (void)addNrCellTowerLocation:(id)a0;
- (unsigned long long)nrCellTowerLocationsCount;
- (id)nrCellTowerLocationAtIndex:(unsigned long long)a0;
- (void)clearWifiAPLocations;
- (void)addWifiAPLocation:(id)a0;
- (unsigned long long)wifiAPLocationsCount;
- (id)wifiAPLocationAtIndex:(unsigned long long)a0;
- (void)clearScdmaCellTowerLocations;
- (void)addScdmaCellTowerLocation:(id)a0;
- (unsigned long long)scdmaCellTowerLocationsCount;
- (id)scdmaCellTowerLocationAtIndex:(unsigned long long)a0;
- (void)clearCellOutOfServiceInfos;
- (void)addCellOutOfServiceInfo:(id)a0;
- (unsigned long long)cellOutOfServiceInfosCount;
- (id)cellOutOfServiceInfoAtIndex:(unsigned long long)a0;

@end
