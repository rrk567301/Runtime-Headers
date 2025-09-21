@interface AWDMETRICSCellularPowerLogPLMNScanEvent : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char duration : 1; unsigned char reasonForScan : 1; unsigned char scanResult : 1; unsigned char scanType : 1; unsigned char subsId : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) char hasScanResult;
@property (nonatomic) int scanResult;
@property (nonatomic) char hasScanType;
@property (nonatomic) int scanType;
@property (nonatomic) char hasReasonForScan;
@property (nonatomic) int reasonForScan;
@property (nonatomic) char hasDuration;
@property (nonatomic) unsigned int duration;
@property (nonatomic) char hasSubsId;
@property (nonatomic) unsigned int subsId;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsScanType:(id)a0;
- (id)scanTypeAsString:(int)a0;
- (int)StringAsReasonForScan:(id)a0;
- (int)StringAsScanResult:(id)a0;
- (id)reasonForScanAsString:(int)a0;
- (id)scanResultAsString:(int)a0;

@end
