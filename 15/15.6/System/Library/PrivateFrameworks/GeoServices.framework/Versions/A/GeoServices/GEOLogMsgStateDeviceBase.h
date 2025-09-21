@class PBUnknownFields;

@interface GEOLogMsgStateDeviceBase : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    int _deviceBatteryState;
    int _deviceInterfaceOrientation;
    char _deviceInVehicle;
    struct { unsigned char has_deviceBatteryState : 1; unsigned char has_deviceInterfaceOrientation : 1; unsigned char has_deviceInVehicle : 1; } _flags;
}

@property (nonatomic) char hasDeviceInterfaceOrientation;
@property (nonatomic) int deviceInterfaceOrientation;
@property (nonatomic) char hasDeviceBatteryState;
@property (nonatomic) int deviceBatteryState;
@property (nonatomic) char hasDeviceInVehicle;
@property (nonatomic) char deviceInVehicle;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (char)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsDeviceBatteryState:(id)a0;
- (int)StringAsDeviceInterfaceOrientation:(id)a0;
- (void)clearUnknownFields:(char)a0;
- (id)deviceBatteryStateAsString:(int)a0;
- (id)deviceInterfaceOrientationAsString:(int)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
