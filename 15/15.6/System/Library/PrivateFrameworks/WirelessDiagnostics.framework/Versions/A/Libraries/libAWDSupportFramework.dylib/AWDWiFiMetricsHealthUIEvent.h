@class NSString;

@interface AWDWiFiMetricsHealthUIEvent : PBCodable <NSCopying> {
    struct { unsigned char healthIssues : 1; unsigned char timestamp : 1; unsigned char eventType : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) char hasEventType;
@property (nonatomic) unsigned int eventType;
@property (nonatomic) char hasHealthIssues;
@property (nonatomic) unsigned long long healthIssues;
@property (readonly, nonatomic) char hasHashCode;
@property (retain, nonatomic) NSString *hashCode;

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

@end
