@class NSString;

@interface AWDWiFiMetricsHealthUIEvent : PBCodable <NSCopying> {
    struct { unsigned char healthIssues : 1; unsigned char timestamp : 1; unsigned char eventType : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasEventType;
@property (nonatomic) unsigned int eventType;
@property (nonatomic) BOOL hasHealthIssues;
@property (nonatomic) unsigned long long healthIssues;
@property (readonly, nonatomic) BOOL hasHashCode;
@property (retain, nonatomic) NSString *hashCode;

- (void)copyTo:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
