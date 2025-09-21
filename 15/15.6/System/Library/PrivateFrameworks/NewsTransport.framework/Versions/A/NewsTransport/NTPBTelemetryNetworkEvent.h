@interface NTPBTelemetryNetworkEvent : PBCodable <NSCopying> {
    struct { unsigned char connectDuration : 1; unsigned char dnsDuration : 1; unsigned char errorCode : 1; unsigned char httpStatusCode : 1; unsigned char requestDuration : 1; unsigned char responseDuration : 1; unsigned char responseSize : 1; unsigned char startTime : 1; unsigned char cacheState : 1; } _has;
}

@property (nonatomic) char hasStartTime;
@property (nonatomic) long long startTime;
@property (nonatomic) char hasDnsDuration;
@property (nonatomic) long long dnsDuration;
@property (nonatomic) char hasConnectDuration;
@property (nonatomic) long long connectDuration;
@property (nonatomic) char hasRequestDuration;
@property (nonatomic) long long requestDuration;
@property (nonatomic) char hasResponseDuration;
@property (nonatomic) long long responseDuration;
@property (nonatomic) char hasResponseSize;
@property (nonatomic) long long responseSize;
@property (nonatomic) char hasCacheState;
@property (nonatomic) int cacheState;
@property (nonatomic) char hasHttpStatusCode;
@property (nonatomic) long long httpStatusCode;
@property (nonatomic) char hasErrorCode;
@property (nonatomic) long long errorCode;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
