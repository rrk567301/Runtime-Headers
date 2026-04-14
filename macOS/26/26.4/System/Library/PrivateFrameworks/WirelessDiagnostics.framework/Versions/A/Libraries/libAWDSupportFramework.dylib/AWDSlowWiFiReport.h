@class AWDSlowWiFiNotification, NSMutableArray;

@interface AWDSlowWiFiReport : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) BOOL hasSlowNotice;
@property (retain, nonatomic) AWDSlowWiFiNotification *slowNotice;
@property (retain, nonatomic) NSMutableArray *linkQualSamples;

+ (Class)linkQualSampleType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (void)dealloc;
- (void)addLinkQualSample:(id)a0;
- (void)clearLinkQualSamples;
- (id)linkQualSampleAtIndex:(unsigned long long)a0;
- (unsigned long long)linkQualSamplesCount;

@end
