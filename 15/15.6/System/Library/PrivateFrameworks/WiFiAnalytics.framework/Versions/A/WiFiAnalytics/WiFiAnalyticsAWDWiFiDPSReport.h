@class WiFiAnalyticsAWDWiFiDPSSnapshot, NSMutableArray, WiFiAnalyticsAWDWiFiDPSEpilogue;

@interface WiFiAnalyticsAWDWiFiDPSReport : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (retain, nonatomic) NSMutableArray *stallNotifications;
@property (retain, nonatomic) NSMutableArray *probeResults;
@property (retain, nonatomic) NSMutableArray *dpsCounterSamples;
@property (readonly, nonatomic) char hasDpsEpiloge;
@property (retain, nonatomic) WiFiAnalyticsAWDWiFiDPSEpilogue *dpsEpiloge;
@property (readonly, nonatomic) char hasSnapshot;
@property (retain, nonatomic) WiFiAnalyticsAWDWiFiDPSSnapshot *snapshot;
@property (retain, nonatomic) NSMutableArray *usbEvents;

+ (Class)probeResultType;
+ (Class)dpsCounterSampleType;
+ (Class)stallNotificationType;
+ (Class)usbEventType;

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
- (void)addProbeResult:(id)a0;
- (void)addDpsCounterSample:(id)a0;
- (void)addStallNotification:(id)a0;
- (void)addUsbEvent:(id)a0;
- (void)clearDpsCounterSamples;
- (void)clearProbeResults;
- (void)clearStallNotifications;
- (void)clearUsbEvents;
- (id)dpsCounterSampleAtIndex:(unsigned long long)a0;
- (unsigned long long)dpsCounterSamplesCount;
- (id)probeResultAtIndex:(unsigned long long)a0;
- (unsigned long long)probeResultsCount;
- (id)stallNotificationAtIndex:(unsigned long long)a0;
- (unsigned long long)stallNotificationsCount;
- (id)usbEventAtIndex:(unsigned long long)a0;
- (unsigned long long)usbEventsCount;

@end
