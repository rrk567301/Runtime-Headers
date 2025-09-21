@interface AWDWiFiSoftAP : PBCodable <NSCopying> {
    struct { unsigned char lowPowerModeDuration : 1; unsigned char misToSoftAPActiveTimeInMilliseconds : 1; unsigned char sessionDuration : 1; unsigned char timestamp : 1; unsigned char appleDeviceConnectCount : 1; unsigned char appleDeviceDisconnectCount : 1; unsigned char bringUpMethod : 1; unsigned char channel : 1; unsigned char otherDeviceConnectCount : 1; unsigned char otherDeviceDisconnectCount : 1; unsigned char reasonCode : 1; unsigned char securityTypes : 1; unsigned char ssidChanged : 1; unsigned char teardownReason : 1; unsigned char familyDevice : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) char hasMisToSoftAPActiveTimeInMilliseconds;
@property (nonatomic) unsigned long long misToSoftAPActiveTimeInMilliseconds;
@property (nonatomic) char hasBringUpMethod;
@property (nonatomic) unsigned int bringUpMethod;
@property (nonatomic) char hasReasonCode;
@property (nonatomic) unsigned int reasonCode;
@property (nonatomic) char hasTeardownReason;
@property (nonatomic) unsigned int teardownReason;
@property (nonatomic) char hasSessionDuration;
@property (nonatomic) unsigned long long sessionDuration;
@property (nonatomic) char hasAppleDeviceConnectCount;
@property (nonatomic) unsigned int appleDeviceConnectCount;
@property (nonatomic) char hasOtherDeviceConnectCount;
@property (nonatomic) unsigned int otherDeviceConnectCount;
@property (nonatomic) char hasAppleDeviceDisconnectCount;
@property (nonatomic) unsigned int appleDeviceDisconnectCount;
@property (nonatomic) char hasOtherDeviceDisconnectCount;
@property (nonatomic) unsigned int otherDeviceDisconnectCount;
@property (nonatomic) char hasChannel;
@property (nonatomic) unsigned int channel;
@property (nonatomic) char hasSsidChanged;
@property (nonatomic) unsigned int ssidChanged;
@property (nonatomic) char hasFamilyDevice;
@property (nonatomic) char familyDevice;
@property (nonatomic) char hasLowPowerModeDuration;
@property (nonatomic) unsigned long long lowPowerModeDuration;
@property (nonatomic) char hasSecurityTypes;
@property (nonatomic) unsigned int securityTypes;

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
