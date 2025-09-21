@class NSData;

@interface AWDMETRICSKCellularPowerLogWcdmaPagingDRXCycle : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char numSubs : 1; unsigned char pagingDrxCycle : 1; unsigned char subsId : 1; unsigned char isDataPreferred : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) char hasPagingDrxCycle;
@property (nonatomic) unsigned int pagingDrxCycle;
@property (nonatomic) char hasSubsId;
@property (nonatomic) unsigned int subsId;
@property (nonatomic) char hasNumSubs;
@property (nonatomic) unsigned int numSubs;
@property (readonly, nonatomic) char hasPlmn;
@property (retain, nonatomic) NSData *plmn;
@property (nonatomic) char hasIsDataPreferred;
@property (nonatomic) char isDataPreferred;

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

@end
