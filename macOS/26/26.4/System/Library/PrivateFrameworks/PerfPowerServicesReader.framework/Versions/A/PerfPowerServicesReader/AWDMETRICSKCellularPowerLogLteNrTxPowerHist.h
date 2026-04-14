@class NSMutableArray;

@interface AWDMETRICSKCellularPowerLogLteNrTxPowerHist : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char durationMs : 1; unsigned char subsId : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasSubsId;
@property (nonatomic) unsigned int subsId;
@property (nonatomic) BOOL hasDurationMs;
@property (nonatomic) unsigned int durationMs;
@property (retain, nonatomic) NSMutableArray *hists;

+ (Class)histType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (void)addHist:(id)a0;
- (void)clearHists;
- (id)histAtIndex:(unsigned long long)a0;
- (unsigned long long)histsCount;

@end
