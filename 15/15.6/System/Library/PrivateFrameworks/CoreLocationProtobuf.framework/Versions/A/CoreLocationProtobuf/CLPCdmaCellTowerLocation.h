@class NSString, CLPLocation, NSMutableArray, CLPCellNeighborsGroup;

@interface CLPCdmaCellTowerLocation : PBCodable <NSCopying> {
    struct { int *list; unsigned long long count; unsigned long long size; } _derivedMccs;
    struct { unsigned char bsLatitude : 1; unsigned char bsLongitude : 1; unsigned char sectorLatitude : 1; unsigned char sectorLongitude : 1; unsigned char bandclass : 1; unsigned char celltype : 1; unsigned char channel : 1; unsigned char dayLightSavings : 1; unsigned char ecn0 : 1; unsigned char ltmOffset : 1; unsigned char pnoffset : 1; unsigned char rat : 1; unsigned char rscp : 1; unsigned char serverHash : 1; unsigned char zoneid : 1; unsigned char isLimitedService : 1; } _has;
}

@property (nonatomic) int mcc;
@property (nonatomic) int mnc;
@property (nonatomic) int sid;
@property (nonatomic) int nid;
@property (nonatomic) int bsid;
@property (nonatomic) char hasBsLatitude;
@property (nonatomic) double bsLatitude;
@property (nonatomic) char hasBsLongitude;
@property (nonatomic) double bsLongitude;
@property (nonatomic) char hasZoneid;
@property (nonatomic) int zoneid;
@property (readonly, nonatomic) char hasSectorid;
@property (retain, nonatomic) NSString *sectorid;
@property (nonatomic) char hasSectorLatitude;
@property (nonatomic) double sectorLatitude;
@property (nonatomic) char hasSectorLongitude;
@property (nonatomic) double sectorLongitude;
@property (nonatomic) char hasBandclass;
@property (nonatomic) int bandclass;
@property (nonatomic) char hasRat;
@property (nonatomic) int rat;
@property (nonatomic) char hasCelltype;
@property (nonatomic) int celltype;
@property (nonatomic) char hasPnoffset;
@property (nonatomic) int pnoffset;
@property (nonatomic) char hasChannel;
@property (nonatomic) int channel;
@property (retain, nonatomic) CLPLocation *location;
@property (readonly, nonatomic) char hasAppBundleId;
@property (retain, nonatomic) NSString *appBundleId;
@property (nonatomic) char hasServerHash;
@property (nonatomic) int serverHash;
@property (readonly, nonatomic) char hasOperatorName;
@property (retain, nonatomic) NSString *operatorName;
@property (nonatomic) char hasLtmOffset;
@property (nonatomic) int ltmOffset;
@property (nonatomic) char hasDayLightSavings;
@property (nonatomic) int dayLightSavings;
@property (readonly, nonatomic) unsigned long long derivedMccsCount;
@property (readonly, nonatomic) int *derivedMccs;
@property (nonatomic) char hasEcn0;
@property (nonatomic) int ecn0;
@property (nonatomic) char hasRscp;
@property (nonatomic) int rscp;
@property (retain, nonatomic) NSMutableArray *neighbors;
@property (readonly, nonatomic) char hasNeighborGroup;
@property (retain, nonatomic) CLPCellNeighborsGroup *neighborGroup;
@property (nonatomic) char hasIsLimitedService;
@property (nonatomic) char isLimitedService;
@property (readonly, nonatomic) char hasServiceProviderName;
@property (retain, nonatomic) NSString *serviceProviderName;

+ (Class)neighborType;

- (void)dealloc;
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
- (void)addDerivedMcc:(int)a0;
- (void)clearDerivedMccs;
- (void)clearNeighbors;
- (int)derivedMccAtIndex:(unsigned long long)a0;
- (unsigned long long)neighborsCount;
- (void)setDerivedMccs:(int *)a0 count:(unsigned long long)a1;

@end
