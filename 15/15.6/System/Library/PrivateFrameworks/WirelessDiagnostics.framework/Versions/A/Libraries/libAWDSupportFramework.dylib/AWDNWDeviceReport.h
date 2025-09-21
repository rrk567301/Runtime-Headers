@class AWDNWAccumulator;

@interface AWDNWDeviceReport : PBCodable <NSCopying> {
    struct { unsigned char batteryAbsoluteCapacity : 1; unsigned char batteryCurrentCapacity : 1; unsigned char batteryDesignCapacity : 1; unsigned char batteryMaximumCapacity : 1; unsigned char batteryPercentage : 1; unsigned char batteryTimeRemaining : 1; unsigned char batteryVoltage : 1; unsigned char cellularMode : 1; unsigned char motionState : 1; unsigned char thermalPressure : 1; unsigned char batteryAtCriticalLevel : 1; unsigned char batteryAtWarnLevel : 1; unsigned char batteryExternalPowerIsConnected : 1; unsigned char batteryFullyCharged : 1; unsigned char batteryIsCharging : 1; unsigned char devicePluggedIn : 1; unsigned char deviceScreenOn : 1; } _has;
}

@property (nonatomic) char hasBatteryPercentage;
@property (nonatomic) unsigned int batteryPercentage;
@property (nonatomic) char hasBatteryCurrentCapacity;
@property (nonatomic) unsigned int batteryCurrentCapacity;
@property (nonatomic) char hasBatteryMaximumCapacity;
@property (nonatomic) unsigned int batteryMaximumCapacity;
@property (nonatomic) char hasBatteryDesignCapacity;
@property (nonatomic) unsigned int batteryDesignCapacity;
@property (nonatomic) char hasBatteryAbsoluteCapacity;
@property (nonatomic) unsigned int batteryAbsoluteCapacity;
@property (nonatomic) char hasBatteryVoltage;
@property (nonatomic) unsigned int batteryVoltage;
@property (nonatomic) char hasBatteryTimeRemaining;
@property (nonatomic) unsigned int batteryTimeRemaining;
@property (nonatomic) char hasBatteryExternalPowerIsConnected;
@property (nonatomic) char batteryExternalPowerIsConnected;
@property (nonatomic) char hasBatteryIsCharging;
@property (nonatomic) char batteryIsCharging;
@property (nonatomic) char hasBatteryFullyCharged;
@property (nonatomic) char batteryFullyCharged;
@property (nonatomic) char hasBatteryAtWarnLevel;
@property (nonatomic) char batteryAtWarnLevel;
@property (nonatomic) char hasBatteryAtCriticalLevel;
@property (nonatomic) char batteryAtCriticalLevel;
@property (nonatomic) char hasDevicePluggedIn;
@property (nonatomic) char devicePluggedIn;
@property (nonatomic) char hasDeviceScreenOn;
@property (nonatomic) char deviceScreenOn;
@property (nonatomic) char hasMotionState;
@property (nonatomic) int motionState;
@property (nonatomic) char hasThermalPressure;
@property (nonatomic) int thermalPressure;
@property (nonatomic) char hasCellularMode;
@property (nonatomic) int cellularMode;
@property (readonly, nonatomic) char hasBatteryAccumulator;
@property (retain, nonatomic) AWDNWAccumulator *batteryAccumulator;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsMotionState:(id)a0;
- (id)motionStateAsString:(int)a0;
- (int)StringAsCellularMode:(id)a0;
- (int)StringAsThermalPressure:(id)a0;
- (id)cellularModeAsString:(int)a0;
- (id)thermalPressureAsString:(int)a0;

@end
