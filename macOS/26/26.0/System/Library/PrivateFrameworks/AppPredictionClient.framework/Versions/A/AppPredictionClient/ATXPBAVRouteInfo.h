@class NSString;

@interface ATXPBAVRouteInfo : PBCodable <NSCopying> {
    struct { unsigned char isExternalRoute : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasDeviceName;
@property (retain, nonatomic) NSString *deviceName;
@property (readonly, nonatomic) BOOL hasDeviceID;
@property (retain, nonatomic) NSString *deviceID;
@property (nonatomic) BOOL hasIsExternalRoute;
@property (nonatomic) BOOL isExternalRoute;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
