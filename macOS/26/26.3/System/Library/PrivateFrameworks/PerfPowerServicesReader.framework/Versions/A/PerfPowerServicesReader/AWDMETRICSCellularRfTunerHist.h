@class NSMutableArray;

@interface AWDMETRICSCellularRfTunerHist : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char ftQualInd : 1; unsigned char subsId : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (retain, nonatomic) NSMutableArray *tunerStateDurations;
@property (nonatomic) BOOL hasFtQualInd;
@property (nonatomic) unsigned int ftQualInd;
@property (nonatomic) BOOL hasSubsId;
@property (nonatomic) unsigned int subsId;

+ (Class)tunerStateDurationType;

- (id)dictionaryRepresentation;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)addTunerStateDuration:(id)a0;
- (void)clearTunerStateDurations;
- (id)tunerStateDurationAtIndex:(unsigned long long)a0;
- (unsigned long long)tunerStateDurationsCount;

@end
