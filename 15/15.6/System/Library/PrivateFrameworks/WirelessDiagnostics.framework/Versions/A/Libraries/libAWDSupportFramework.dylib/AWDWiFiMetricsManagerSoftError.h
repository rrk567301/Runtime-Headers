@class AWDWiFiMetricsManagerChipCounters, NSString, AWDWiFiMetricsManagerBTCoexStats, NSData, AWDWiFiMetricsManagerBTCoexModeChange, NSMutableArray;

@interface AWDWiFiMetricsManagerSoftError : PBCodable <NSCopying> {
    struct { unsigned char sample1TimeStamp : 1; unsigned char sample2TimeStamp : 1; unsigned char timestamp : 1; unsigned char batteryChargeLevel : 1; unsigned char channel : 1; unsigned char lastSoftErrorUserFeedbk : 1; unsigned char motionState : 1; unsigned char sample1Cca : 1; unsigned char sample1Rssi : 1; unsigned char sample1Snr : 1; unsigned char sample2Cca : 1; unsigned char sample2Rssi : 1; unsigned char sample2Snr : 1; unsigned char softErrorType : 1; unsigned char inCar : 1; unsigned char lowPowerMode : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) char hasSoftErrorType;
@property (nonatomic) unsigned int softErrorType;
@property (nonatomic) char hasSample1TimeStamp;
@property (nonatomic) unsigned long long sample1TimeStamp;
@property (nonatomic) char hasSample2TimeStamp;
@property (nonatomic) unsigned long long sample2TimeStamp;
@property (nonatomic) char hasSample1Rssi;
@property (nonatomic) int sample1Rssi;
@property (nonatomic) char hasSample2Rssi;
@property (nonatomic) int sample2Rssi;
@property (nonatomic) char hasSample1Cca;
@property (nonatomic) int sample1Cca;
@property (nonatomic) char hasSample2Cca;
@property (nonatomic) int sample2Cca;
@property (nonatomic) char hasSample1Snr;
@property (nonatomic) int sample1Snr;
@property (nonatomic) char hasSample2Snr;
@property (nonatomic) int sample2Snr;
@property (readonly, nonatomic) char hasAppId;
@property (retain, nonatomic) NSString *appId;
@property (nonatomic) char hasInCar;
@property (nonatomic) char inCar;
@property (nonatomic) char hasMotionState;
@property (nonatomic) unsigned int motionState;
@property (nonatomic) char hasChannel;
@property (nonatomic) unsigned int channel;
@property (readonly, nonatomic) char hasApOUI;
@property (retain, nonatomic) NSData *apOUI;
@property (nonatomic) char hasBatteryChargeLevel;
@property (nonatomic) unsigned int batteryChargeLevel;
@property (nonatomic) char hasLowPowerMode;
@property (nonatomic) char lowPowerMode;
@property (readonly, nonatomic) char hasChipCounters;
@property (retain, nonatomic) AWDWiFiMetricsManagerChipCounters *chipCounters;
@property (readonly, nonatomic) char hasBtCoexStats;
@property (retain, nonatomic) AWDWiFiMetricsManagerBTCoexStats *btCoexStats;
@property (readonly, nonatomic) char hasBtCoexModeChange;
@property (retain, nonatomic) AWDWiFiMetricsManagerBTCoexModeChange *btCoexModeChange;
@property (nonatomic) char hasLastSoftErrorUserFeedbk;
@property (nonatomic) unsigned int lastSoftErrorUserFeedbk;
@property (retain, nonatomic) NSMutableArray *chipCountersPerSlices;

+ (Class)chipCountersPerSliceType;

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
- (void)addChipCountersPerSlice:(id)a0;
- (id)chipCountersPerSliceAtIndex:(unsigned long long)a0;
- (unsigned long long)chipCountersPerSlicesCount;
- (void)clearChipCountersPerSlices;

@end
