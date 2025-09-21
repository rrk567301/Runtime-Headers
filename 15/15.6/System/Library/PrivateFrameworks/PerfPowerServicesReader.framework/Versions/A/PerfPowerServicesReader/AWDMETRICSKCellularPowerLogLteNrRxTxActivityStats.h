@class NSData, NSMutableArray;

@interface AWDMETRICSKCellularPowerLogLteNrRxTxActivityStats : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char durationMs : 1; unsigned char subsId : 1; unsigned char isDataPreferred : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) char hasDurationMs;
@property (nonatomic) unsigned int durationMs;
@property (retain, nonatomic) NSMutableArray *rxTxActs;
@property (nonatomic) char hasSubsId;
@property (nonatomic) unsigned int subsId;
@property (readonly, nonatomic) char hasPlmn;
@property (retain, nonatomic) NSData *plmn;
@property (nonatomic) char hasIsDataPreferred;
@property (nonatomic) char isDataPreferred;

+ (Class)rxTxActType;

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
- (id)rxTxActAtIndex:(unsigned long long)a0;
- (void)addRxTxAct:(id)a0;
- (void)clearRxTxActs;
- (unsigned long long)rxTxActsCount;

@end
