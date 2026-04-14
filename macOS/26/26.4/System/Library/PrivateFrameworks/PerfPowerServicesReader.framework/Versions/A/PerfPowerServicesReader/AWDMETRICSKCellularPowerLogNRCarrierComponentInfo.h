@class NSMutableArray;

@interface AWDMETRICSKCellularPowerLogNRCarrierComponentInfo : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char freqRange : 1; unsigned char subsId : 1; unsigned char isDataPreferred : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasSubsId;
@property (nonatomic) unsigned int subsId;
@property (retain, nonatomic) NSMutableArray *carrierInfos;
@property (nonatomic) BOOL hasFreqRange;
@property (nonatomic) int freqRange;
@property (nonatomic) BOOL hasIsDataPreferred;
@property (nonatomic) BOOL isDataPreferred;

+ (Class)carrierInfoType;

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
- (int)StringAsFreqRange:(id)a0;
- (void)addCarrierInfo:(id)a0;
- (id)carrierInfoAtIndex:(unsigned long long)a0;
- (unsigned long long)carrierInfosCount;
- (void)clearCarrierInfos;
- (id)freqRangeAsString:(int)a0;

@end
