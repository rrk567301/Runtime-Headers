@class NSString;

@interface ATXPBAVRouteInfo : PBCodable <NSCopying> {
    struct { unsigned char isExternalRoute : 1; } _has;
}

@property (readonly, nonatomic) char hasDeviceName;
@property (retain, nonatomic) NSString *deviceName;
@property (readonly, nonatomic) char hasDeviceID;
@property (retain, nonatomic) NSString *deviceID;
@property (nonatomic) char hasIsExternalRoute;
@property (nonatomic) char isExternalRoute;

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
