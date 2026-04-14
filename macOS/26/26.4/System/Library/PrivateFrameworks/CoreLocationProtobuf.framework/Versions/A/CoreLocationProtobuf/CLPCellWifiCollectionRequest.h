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

+ (Class)cdmaCellTowerLocationType;
+ (Class)cellOutOfServiceInfoType;
+ (Class)cellTowerLocationType;
+ (Class)lteCellTowerLocationType;
+ (Class)nrCellTowerLocationType;
+ (Class)scdmaCellTowerLocationType;
+ (Class)wifiAPLocationType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (Class)responseClass;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned int)requestTypeCode;
- (void)addCdmaCellTowerLocation:(id)a0;
- (void)addCellOutOfServiceInfo:(id)a0;
- (void)addCellTowerLocation:(id)a0;
- (void)addLteCellTowerLocation:(id)a0;
- (void)addNrCellTowerLocation:(id)a0;
- (void)addScdmaCellTowerLocation:(id)a0;
- (void)addWifiAPLocation:(id)a0;
- (id)cdmaCellTowerLocationAtIndex:(unsigned long long)a0;
- (unsigned long long)cdmaCellTowerLocationsCount;
- (id)cellOutOfServiceInfoAtIndex:(unsigned long long)a0;
- (unsigned long long)cellOutOfServiceInfosCount;
- (id)cellTowerLocationAtIndex:(unsigned long long)a0;
- (unsigned long long)cellTowerLocationsCount;
- (void)clearCdmaCellTowerLocations;
- (void)clearCellOutOfServiceInfos;
- (void)clearCellTowerLocations;
- (void)clearLteCellTowerLocations;
- (void)clearNrCellTowerLocations;
- (void)clearScdmaCellTowerLocations;
- (void)clearWifiAPLocations;
- (id)lteCellTowerLocationAtIndex:(unsigned long long)a0;
- (unsigned long long)lteCellTowerLocationsCount;
- (id)nrCellTowerLocationAtIndex:(unsigned long long)a0;
- (unsigned long long)nrCellTowerLocationsCount;
- (id)scdmaCellTowerLocationAtIndex:(unsigned long long)a0;
- (unsigned long long)scdmaCellTowerLocationsCount;
- (id)wifiAPLocationAtIndex:(unsigned long long)a0;
- (unsigned long long)wifiAPLocationsCount;

@end
