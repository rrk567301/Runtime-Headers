@class NSString;

@interface AWDOSAnalyticsSubmissions : PBCodable <NSCopying> {
    struct { unsigned char logs : 1; unsigned char seconds : 1; unsigned char sizeBytes : 1; unsigned char timestamp : 1; unsigned char response : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) char hasResponse;
@property (nonatomic) int response;
@property (readonly, nonatomic) char hasConnection;
@property (retain, nonatomic) NSString *connection;
@property (readonly, nonatomic) char hasRouting;
@property (retain, nonatomic) NSString *routing;
@property (nonatomic) char hasSizeBytes;
@property (nonatomic) unsigned long long sizeBytes;
@property (nonatomic) char hasLogs;
@property (nonatomic) unsigned long long logs;
@property (nonatomic) char hasSeconds;
@property (nonatomic) unsigned long long seconds;

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
