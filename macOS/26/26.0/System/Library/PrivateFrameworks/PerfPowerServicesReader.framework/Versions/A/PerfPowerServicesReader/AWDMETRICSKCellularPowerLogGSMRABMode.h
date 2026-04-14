@class NSData, NSMutableArray;

@interface AWDMETRICSKCellularPowerLogGSMRABMode : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char durationMs : 1; unsigned char numSubs : 1; unsigned char subsId : 1; unsigned char isDataPreferred : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (retain, nonatomic) NSMutableArray *bins;
@property (nonatomic) BOOL hasDurationMs;
@property (nonatomic) unsigned int durationMs;
@property (nonatomic) BOOL hasSubsId;
@property (nonatomic) unsigned int subsId;
@property (nonatomic) BOOL hasNumSubs;
@property (nonatomic) unsigned int numSubs;
@property (nonatomic) BOOL hasIsDataPreferred;
@property (nonatomic) BOOL isDataPreferred;
@property (readonly, nonatomic) BOOL hasPlmn;
@property (retain, nonatomic) NSData *plmn;

+ (Class)binType;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)addBin:(id)a0;
- (id)binAtIndex:(unsigned long long)a0;
- (unsigned long long)binsCount;
- (void)clearBins;

@end
