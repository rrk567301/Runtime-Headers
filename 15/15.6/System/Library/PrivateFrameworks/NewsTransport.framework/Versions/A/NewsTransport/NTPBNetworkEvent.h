@class NSString, NSMutableArray;

@interface NTPBNetworkEvent : PBCodable <NSCopying> {
    struct { unsigned char connectDuration : 1; unsigned char dnsDuration : 1; unsigned char errorCode : 1; unsigned char httpStatusCode : 1; unsigned char requestDuration : 1; unsigned char responseDuration : 1; unsigned char responseSize : 1; unsigned char sessionID : 1; unsigned char startTime : 1; unsigned char cacheState : 1; unsigned char type : 1; unsigned char isProxyConnection : 1; } _has;
}

@property (nonatomic) char hasStartTime;
@property (nonatomic) unsigned long long startTime;
@property (nonatomic) char hasDnsDuration;
@property (nonatomic) unsigned long long dnsDuration;
@property (nonatomic) char hasConnectDuration;
@property (nonatomic) unsigned long long connectDuration;
@property (nonatomic) char hasRequestDuration;
@property (nonatomic) unsigned long long requestDuration;
@property (nonatomic) char hasResponseDuration;
@property (nonatomic) unsigned long long responseDuration;
@property (nonatomic) char hasResponseSize;
@property (nonatomic) unsigned long long responseSize;
@property (nonatomic) char hasCacheState;
@property (nonatomic) int cacheState;
@property (nonatomic) char hasHttpStatusCode;
@property (nonatomic) unsigned long long httpStatusCode;
@property (nonatomic) char hasErrorCode;
@property (nonatomic) long long errorCode;
@property (nonatomic) char hasType;
@property (nonatomic) int type;
@property (readonly, nonatomic) char hasUrl;
@property (retain, nonatomic) NSString *url;
@property (readonly, nonatomic) char hasRequestUUID;
@property (retain, nonatomic) NSString *requestUUID;
@property (readonly, nonatomic) char hasRespondingPOP;
@property (retain, nonatomic) NSString *respondingPOP;
@property (nonatomic) char hasSessionID;
@property (nonatomic) unsigned long long sessionID;
@property (nonatomic) char hasIsProxyConnection;
@property (nonatomic) char isProxyConnection;
@property (retain, nonatomic) NSMutableArray *smarterFetchSources;
@property (readonly, nonatomic) char hasSmarterFetchStrategy;
@property (retain, nonatomic) NSString *smarterFetchStrategy;

+ (Class)smarterFetchSourcesType;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addSmarterFetchSources:(id)a0;
- (void)clearSmarterFetchSources;
- (id)smarterFetchSourcesAtIndex:(unsigned long long)a0;
- (unsigned long long)smarterFetchSourcesCount;

@end
