@class AWDMETRICSKCellularPowerLogNRCdrxConfigNrCdrxConfigPerCellGroup, AWDMETRICSKCellularPowerLogNRCdrxConfigNrCdrxSecondaryConfigPerCellGroup;

@interface AWDMETRICSKCellularPowerLogNRCdrxConfig : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char subsId : 1; unsigned char isEndc : 1; unsigned char vonrCallOngoing : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) char hasMcgDefaultDrx;
@property (retain, nonatomic) AWDMETRICSKCellularPowerLogNRCdrxConfigNrCdrxConfigPerCellGroup *mcgDefaultDrx;
@property (readonly, nonatomic) char hasMcgSecondaryDrx;
@property (retain, nonatomic) AWDMETRICSKCellularPowerLogNRCdrxConfigNrCdrxSecondaryConfigPerCellGroup *mcgSecondaryDrx;
@property (readonly, nonatomic) char hasScgDefaultDrx;
@property (retain, nonatomic) AWDMETRICSKCellularPowerLogNRCdrxConfigNrCdrxConfigPerCellGroup *scgDefaultDrx;
@property (readonly, nonatomic) char hasScgSecondaryDrx;
@property (retain, nonatomic) AWDMETRICSKCellularPowerLogNRCdrxConfigNrCdrxSecondaryConfigPerCellGroup *scgSecondaryDrx;
@property (readonly, nonatomic) char hasEndcScgDefaultDrx;
@property (retain, nonatomic) AWDMETRICSKCellularPowerLogNRCdrxConfigNrCdrxConfigPerCellGroup *endcScgDefaultDrx;
@property (readonly, nonatomic) char hasEndcScgSecondaryDrx;
@property (retain, nonatomic) AWDMETRICSKCellularPowerLogNRCdrxConfigNrCdrxSecondaryConfigPerCellGroup *endcScgSecondaryDrx;
@property (nonatomic) char hasVonrCallOngoing;
@property (nonatomic) char vonrCallOngoing;
@property (nonatomic) char hasIsEndc;
@property (nonatomic) char isEndc;
@property (nonatomic) char hasSubsId;
@property (nonatomic) unsigned int subsId;

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
