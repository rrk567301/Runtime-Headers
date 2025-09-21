@class NSString, CLPLocation, NSMutableArray, CLPCellNeighborsGroup;

@interface CLPSCdmaCellTowerLocation : PBCodable <NSCopying> {
    struct { unsigned char arfcn : 1; unsigned char ecn0 : 1; unsigned char psc : 1; unsigned char rat : 1; unsigned char rscp : 1; unsigned char serverHash : 1; unsigned char transmit : 1; unsigned char isLimitedService : 1; } _has;
}

@property (nonatomic) int mcc;
@property (nonatomic) int mnc;
@property (nonatomic) int lac;
@property (nonatomic) int ci;
@property (nonatomic) int rssi;
@property (nonatomic) char hasArfcn;
@property (nonatomic) int arfcn;
@property (nonatomic) char hasPsc;
@property (nonatomic) int psc;
@property (retain, nonatomic) CLPLocation *location;
@property (readonly, nonatomic) char hasAppBundleId;
@property (retain, nonatomic) NSString *appBundleId;
@property (nonatomic) char hasServerHash;
@property (nonatomic) int serverHash;
@property (nonatomic) char hasTransmit;
@property (nonatomic) int transmit;
@property (readonly, nonatomic) char hasOperatorName;
@property (retain, nonatomic) NSString *operatorName;
@property (nonatomic) char hasEcn0;
@property (nonatomic) int ecn0;
@property (nonatomic) char hasRscp;
@property (nonatomic) int rscp;
@property (nonatomic) char hasRat;
@property (nonatomic) int rat;
@property (retain, nonatomic) NSMutableArray *neighbors;
@property (readonly, nonatomic) char hasNeighborGroup;
@property (retain, nonatomic) CLPCellNeighborsGroup *neighborGroup;
@property (nonatomic) char hasIsLimitedService;
@property (nonatomic) char isLimitedService;
@property (readonly, nonatomic) char hasServiceProviderName;
@property (retain, nonatomic) NSString *serviceProviderName;

+ (Class)neighborType;

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
- (void)addNeighbor:(id)a0;
- (id)neighborAtIndex:(unsigned long long)a0;
- (void)clearNeighbors;
- (unsigned long long)neighborsCount;

@end
