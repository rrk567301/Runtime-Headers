@class NSString;

@interface AWDCFNetworkTransactionMetrics : PBCodable <NSCopying> {
    struct { unsigned char requestEnd : 1; unsigned char requestStart : 1; unsigned char responseEnd : 1; unsigned char responseStart : 1; unsigned char timestamp : 1; unsigned char totalBytesExpectedToRead : 1; unsigned char totalBytesExpectedToWrite : 1; unsigned char totalBytesRead : 1; unsigned char totalBytesWritten : 1; unsigned char http3Status : 1; unsigned char networkLoadType : 1; unsigned char networkProtocolName : 1; unsigned char apsRelayAttempted : 1; unsigned char apsRelaySucceeded : 1; unsigned char isRedirected : 1; unsigned char reusedConnection : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) char hasNetworkProtocolName;
@property (nonatomic) int networkProtocolName;
@property (nonatomic) char hasNetworkLoadType;
@property (nonatomic) int networkLoadType;
@property (nonatomic) char hasReusedConnection;
@property (nonatomic) char reusedConnection;
@property (nonatomic) char hasIsRedirected;
@property (nonatomic) char isRedirected;
@property (nonatomic) char hasRequestStart;
@property (nonatomic) unsigned long long requestStart;
@property (nonatomic) char hasRequestEnd;
@property (nonatomic) unsigned long long requestEnd;
@property (nonatomic) char hasResponseStart;
@property (nonatomic) unsigned long long responseStart;
@property (nonatomic) char hasResponseEnd;
@property (nonatomic) unsigned long long responseEnd;
@property (nonatomic) char hasTotalBytesWritten;
@property (nonatomic) unsigned long long totalBytesWritten;
@property (nonatomic) char hasTotalBytesRead;
@property (nonatomic) unsigned long long totalBytesRead;
@property (readonly, nonatomic) char hasConnectionUUID;
@property (retain, nonatomic) NSString *connectionUUID;
@property (nonatomic) char hasApsRelayAttempted;
@property (nonatomic) char apsRelayAttempted;
@property (nonatomic) char hasApsRelaySucceeded;
@property (nonatomic) char apsRelaySucceeded;
@property (nonatomic) char hasTotalBytesExpectedToWrite;
@property (nonatomic) unsigned long long totalBytesExpectedToWrite;
@property (nonatomic) char hasTotalBytesExpectedToRead;
@property (nonatomic) unsigned long long totalBytesExpectedToRead;
@property (nonatomic) char hasHttp3Status;
@property (nonatomic) int http3Status;

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
- (int)StringAsHttp3Status:(id)a0;
- (int)StringAsNetworkLoadType:(id)a0;
- (int)StringAsNetworkProtocolName:(id)a0;
- (id)http3StatusAsString:(int)a0;
- (id)networkLoadTypeAsString:(int)a0;
- (id)networkProtocolNameAsString:(int)a0;

@end
