@class WiFiAnalyticsAWDSlowWiFiNotification, NSMutableArray;

@interface WiFiAnalyticsAWDWiFiSlowWiFiReport : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) BOOL hasSlowNotice;
@property (retain, nonatomic) WiFiAnalyticsAWDSlowWiFiNotification *slowNotice;
@property (retain, nonatomic) NSMutableArray *linkQualSamples;
@property (retain, nonatomic) NSMutableArray *usbEvents;

+ (Class)linkQualSampleType;
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
- (void)clearLinkQualSamples;
- (void)addLinkQualSample:(id)a0;
- (unsigned long long)linkQualSamplesCount;
- (id)linkQualSampleAtIndex:(unsigned long long)a0;
- (void)clearUsbEvents;
- (void)addUsbEvent:(id)a0;
- (unsigned long long)usbEventsCount;
- (id)usbEventAtIndex:(unsigned long long)a0;

@end
