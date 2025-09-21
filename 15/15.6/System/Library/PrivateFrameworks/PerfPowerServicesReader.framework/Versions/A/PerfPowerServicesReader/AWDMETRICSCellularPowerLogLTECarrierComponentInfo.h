@class NSMutableArray;

@interface AWDMETRICSCellularPowerLogLTECarrierComponentInfo : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char subsId : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) char hasSubsId;
@property (nonatomic) unsigned int subsId;
@property (retain, nonatomic) NSMutableArray *carrierInfos;

+ (Class)carrierInfoType;

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
- (void)addCarrierInfo:(id)a0;
- (id)carrierInfoAtIndex:(unsigned long long)a0;
- (unsigned long long)carrierInfosCount;
- (void)clearCarrierInfos;

@end
