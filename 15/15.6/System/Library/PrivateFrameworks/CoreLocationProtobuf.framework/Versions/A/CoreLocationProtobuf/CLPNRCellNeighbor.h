@interface CLPNRCellNeighbor : PBCodable <NSCopying> {
    struct { unsigned char bandwidth : 1; unsigned char bwpSupport : 1; unsigned char ecn0 : 1; unsigned char maxThroughput : 1; unsigned char neighborType : 1; unsigned char nrarfcn : 1; unsigned char pid : 1; unsigned char rscp : 1; unsigned char rssi : 1; unsigned char saOrNsaNeighbor : 1; unsigned char scs : 1; } _has;
}

@property (nonatomic) char hasNrarfcn;
@property (nonatomic) int nrarfcn;
@property (nonatomic) char hasPid;
@property (nonatomic) int pid;
@property (nonatomic) char hasRssi;
@property (nonatomic) int rssi;
@property (nonatomic) char hasEcn0;
@property (nonatomic) int ecn0;
@property (nonatomic) char hasRscp;
@property (nonatomic) int rscp;
@property (nonatomic) char hasScs;
@property (nonatomic) unsigned int scs;
@property (nonatomic) char hasSaOrNsaNeighbor;
@property (nonatomic) unsigned int saOrNsaNeighbor;
@property (nonatomic) char hasBandwidth;
@property (nonatomic) unsigned int bandwidth;
@property (nonatomic) char hasNeighborType;
@property (nonatomic) unsigned int neighborType;
@property (nonatomic) char hasMaxThroughput;
@property (nonatomic) unsigned int maxThroughput;
@property (nonatomic) char hasBwpSupport;
@property (nonatomic) unsigned int bwpSupport;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
