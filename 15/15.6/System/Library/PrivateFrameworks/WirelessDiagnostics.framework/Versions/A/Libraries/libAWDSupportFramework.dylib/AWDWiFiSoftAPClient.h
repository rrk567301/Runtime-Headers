@interface AWDWiFiSoftAPClient : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char enhancedSecurityType : 1; unsigned char failureReason : 1; unsigned char rssi : 1; unsigned char familyDevice : 1; unsigned char joinedByAutoHS : 1; unsigned char switchedToAnotherNetwork : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) char hasFamilyDevice;
@property (nonatomic) char familyDevice;
@property (nonatomic) char hasJoinedByAutoHS;
@property (nonatomic) char joinedByAutoHS;
@property (nonatomic) char hasSwitchedToAnotherNetwork;
@property (nonatomic) char switchedToAnotherNetwork;
@property (nonatomic) char hasFailureReason;
@property (nonatomic) unsigned int failureReason;
@property (nonatomic) char hasRssi;
@property (nonatomic) unsigned int rssi;
@property (nonatomic) char hasEnhancedSecurityType;
@property (nonatomic) unsigned int enhancedSecurityType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
