@class NSData;

@interface AWDMETRICSKCellularPowerLogWCDMACDRXConfig : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char drxCycleLength : 1; unsigned char numSubs : 1; unsigned char subsId : 1; unsigned char ueDrxCycleInactivityThreshold : 1; unsigned char ueGrantMonitoringInactivityThreshold : 1; unsigned char isDataPreferred : 1; unsigned char ueDrxGrantMonitoring : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) char hasDrxCycleLength;
@property (nonatomic) unsigned int drxCycleLength;
@property (nonatomic) char hasUeDrxCycleInactivityThreshold;
@property (nonatomic) unsigned int ueDrxCycleInactivityThreshold;
@property (nonatomic) char hasUeGrantMonitoringInactivityThreshold;
@property (nonatomic) unsigned int ueGrantMonitoringInactivityThreshold;
@property (nonatomic) char hasUeDrxGrantMonitoring;
@property (nonatomic) char ueDrxGrantMonitoring;
@property (nonatomic) char hasSubsId;
@property (nonatomic) unsigned int subsId;
@property (readonly, nonatomic) char hasPlmn;
@property (retain, nonatomic) NSData *plmn;
@property (nonatomic) char hasNumSubs;
@property (nonatomic) unsigned int numSubs;
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
