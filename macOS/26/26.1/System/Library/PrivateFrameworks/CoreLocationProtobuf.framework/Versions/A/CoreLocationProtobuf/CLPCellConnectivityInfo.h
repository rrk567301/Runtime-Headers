@class CLPScdmaCellTower, CLPNrCellTower, CLPLteCellTower, CLPCdmaCellTower, CLPGsmCellTower;

@interface CLPCellConnectivityInfo : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char connectionStatus : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) double timestamp;
@property (nonatomic) BOOL hasConnectionStatus;
@property (nonatomic) int connectionStatus;
@property (readonly, nonatomic) BOOL hasGsm;
@property (retain, nonatomic) CLPGsmCellTower *gsm;
@property (readonly, nonatomic) BOOL hasCdma;
@property (retain, nonatomic) CLPCdmaCellTower *cdma;
@property (readonly, nonatomic) BOOL hasScdma;
@property (retain, nonatomic) CLPScdmaCellTower *scdma;
@property (readonly, nonatomic) BOOL hasLte;
@property (retain, nonatomic) CLPLteCellTower *lte;
@property (readonly, nonatomic) BOOL hasNr;
@property (retain, nonatomic) CLPNrCellTower *nr;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsConnectionStatus:(id)a0;
- (id)connectionStatusAsString:(int)a0;

@end
