@class AWDSlowWiFiNotification, NSMutableArray;

@interface AWDWiFiSlowWiFiReport : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) BOOL hasSlowNotice;
@property (retain, nonatomic) AWDSlowWiFiNotification *slowNotice;
@property (retain, nonatomic) NSMutableArray *linkQualSamples;
@property (retain, nonatomic) NSMutableArray *usbEvents;

+ (Class)linkQualSampleType;
+ (Class)usbEventType;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
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
