@interface AWDWADiagnosisActionAssociationDifferences : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char additionalInfo : 1; unsigned char eventType : 1; unsigned char changedChannel : 1; unsigned char changedDNSPrimary : 1; unsigned char changedDNSSecondary : 1; unsigned char changedMAC : 1; unsigned char newBSSID : 1; } _has;
}

@property (nonatomic) char hasNewBSSID;
@property (nonatomic) char newBSSID;
@property (nonatomic) char hasChangedChannel;
@property (nonatomic) char changedChannel;
@property (nonatomic) char hasChangedDNSPrimary;
@property (nonatomic) char changedDNSPrimary;
@property (nonatomic) char hasChangedDNSSecondary;
@property (nonatomic) char changedDNSSecondary;
@property (nonatomic) char hasChangedMAC;
@property (nonatomic) char changedMAC;
@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) char hasEventType;
@property (nonatomic) int eventType;
@property (nonatomic) char hasAdditionalInfo;
@property (nonatomic) unsigned int additionalInfo;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsEventType:(id)a0;
- (id)eventTypeAsString:(int)a0;

@end
