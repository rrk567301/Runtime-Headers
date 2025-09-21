@class AWDSlowWiFiNotification, NSMutableArray;

@interface AWDWiFiSlowWiFiReport : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) char hasSlowNotice;
@property (retain, nonatomic) AWDSlowWiFiNotification *slowNotice;
@property (retain, nonatomic) NSMutableArray *linkQualSamples;
@property (retain, nonatomic) NSMutableArray *usbEvents;

+ (Class)linkQualSampleType;
+ (Class)usbEventType;

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
- (void)addLinkQualSample:(id)a0;
- (void)addUsbEvent:(id)a0;
- (void)clearLinkQualSamples;
- (void)clearUsbEvents;
- (id)linkQualSampleAtIndex:(unsigned long long)a0;
- (unsigned long long)linkQualSamplesCount;
- (id)usbEventAtIndex:(unsigned long long)a0;
- (unsigned long long)usbEventsCount;

@end
