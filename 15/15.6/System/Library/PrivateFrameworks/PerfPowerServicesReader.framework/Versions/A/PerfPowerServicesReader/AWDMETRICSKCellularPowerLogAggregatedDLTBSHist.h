@class NSMutableArray;

@interface AWDMETRICSKCellularPowerLogAggregatedDLTBSHist : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char durationMs : 1; unsigned char numSubs : 1; unsigned char subsId : 1; unsigned char isDataPreferred : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (retain, nonatomic) NSMutableArray *bins;
@property (nonatomic) char hasSubsId;
@property (nonatomic) unsigned int subsId;
@property (nonatomic) char hasDurationMs;
@property (nonatomic) unsigned int durationMs;
@property (nonatomic) char hasNumSubs;
@property (nonatomic) unsigned int numSubs;
@property (nonatomic) char hasIsDataPreferred;
@property (nonatomic) char isDataPreferred;

+ (Class)binType;

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
- (void)addBin:(id)a0;
- (id)binAtIndex:(unsigned long long)a0;
- (unsigned long long)binsCount;
- (void)clearBins;

@end
