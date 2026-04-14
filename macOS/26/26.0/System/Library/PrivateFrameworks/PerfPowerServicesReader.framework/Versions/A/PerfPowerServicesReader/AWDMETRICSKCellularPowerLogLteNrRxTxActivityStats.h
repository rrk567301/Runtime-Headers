@class NSData, NSMutableArray;

@interface AWDMETRICSKCellularPowerLogLteNrRxTxActivityStats : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char durationMs : 1; unsigned char subsId : 1; unsigned char isDataPreferred : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasDurationMs;
@property (nonatomic) unsigned int durationMs;
@property (retain, nonatomic) NSMutableArray *rxTxActs;
@property (nonatomic) BOOL hasSubsId;
@property (nonatomic) unsigned int subsId;
@property (readonly, nonatomic) BOOL hasPlmn;
@property (retain, nonatomic) NSData *plmn;
@property (nonatomic) BOOL hasIsDataPreferred;
@property (nonatomic) BOOL isDataPreferred;

+ (Class)rxTxActType;

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
- (id)rxTxActAtIndex:(unsigned long long)a0;
- (void)addRxTxAct:(id)a0;
- (void)clearRxTxActs;
- (unsigned long long)rxTxActsCount;

@end
