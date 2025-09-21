@interface AWDWiFiUSBEventNotification : PBCodable <NSCopying> {
    struct { unsigned char durationSinceUSBEventInSeconds : 1; unsigned char usbAction : 1; unsigned char usbTotal : 1; unsigned char isVendorApple : 1; unsigned char smartCCADesenseSupported : 1; } _has;
}

@property (nonatomic) char hasUsbAction;
@property (nonatomic) unsigned int usbAction;
@property (nonatomic) char hasUsbTotal;
@property (nonatomic) unsigned int usbTotal;
@property (nonatomic) char hasDurationSinceUSBEventInSeconds;
@property (nonatomic) unsigned long long durationSinceUSBEventInSeconds;
@property (nonatomic) char hasIsVendorApple;
@property (nonatomic) char isVendorApple;
@property (nonatomic) char hasSmartCCADesenseSupported;
@property (nonatomic) char smartCCADesenseSupported;

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
