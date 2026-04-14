@class NSData;

@interface AWDMETRICSKCellularPowerLogWcdmaPagingDRXCycle : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char numSubs : 1; unsigned char pagingDrxCycle : 1; unsigned char subsId : 1; unsigned char isDataPreferred : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasPagingDrxCycle;
@property (nonatomic) unsigned int pagingDrxCycle;
@property (nonatomic) BOOL hasSubsId;
@property (nonatomic) unsigned int subsId;
@property (nonatomic) BOOL hasNumSubs;
@property (nonatomic) unsigned int numSubs;
@property (readonly, nonatomic) BOOL hasPlmn;
@property (retain, nonatomic) NSData *plmn;
@property (nonatomic) BOOL hasIsDataPreferred;
@property (nonatomic) BOOL isDataPreferred;

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

@end
