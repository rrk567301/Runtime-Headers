@class WiFiAnalyticsAWDWiFiDPSSnapshot, NSMutableArray, WiFiAnalyticsAWDWiFiDPSEpilogue;

@interface WiFiAnalyticsAWDWiFiDPSReport : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (retain, nonatomic) NSMutableArray *stallNotifications;
@property (retain, nonatomic) NSMutableArray *probeResults;
@property (retain, nonatomic) NSMutableArray *dpsCounterSamples;
@property (readonly, nonatomic) BOOL hasDpsEpiloge;
@property (retain, nonatomic) WiFiAnalyticsAWDWiFiDPSEpilogue *dpsEpiloge;
@property (readonly, nonatomic) BOOL hasSnapshot;
@property (retain, nonatomic) WiFiAnalyticsAWDWiFiDPSSnapshot *snapshot;
@property (retain, nonatomic) NSMutableArray *usbEvents;

+ (Class)stallNotificationType;
+ (Class)probeResultType;
+ (Class)dpsCounterSampleType;
+ (Class)usbEventType;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (void)clearStallNotifications;
- (void)addStallNotification:(id)a0;
- (unsigned long long)stallNotificationsCount;
- (id)stallNotificationAtIndex:(unsigned long long)a0;
- (void)clearProbeResults;
- (void)addProbeResult:(id)a0;
- (unsigned long long)probeResultsCount;
- (id)probeResultAtIndex:(unsigned long long)a0;
- (void)clearDpsCounterSamples;
- (void)addDpsCounterSample:(id)a0;
- (unsigned long long)dpsCounterSamplesCount;
- (id)dpsCounterSampleAtIndex:(unsigned long long)a0;
- (void)clearUsbEvents;
- (void)addUsbEvent:(id)a0;
- (unsigned long long)usbEventsCount;
- (id)usbEventAtIndex:(unsigned long long)a0;

@end
