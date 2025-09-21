@interface AWDLBClientConnectionReport : PBCodable <NSCopying> {
    struct { unsigned char bytesReceived : 1; unsigned char bytesSent : 1; unsigned char connectionDuration : 1; unsigned char connectionServiceId : 1; unsigned char timeToConnectionFailure : 1; unsigned char timeToFirstResponse : 1; unsigned char timestamp : 1; unsigned char connectionJoiningFailure : 1; unsigned char connectionJoiningLbConnectionMigration : 1; unsigned char connectionJoiningLbConnectionState : 1; unsigned char dataPathResult : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) char hasConnectionJoiningFailure;
@property (nonatomic) int connectionJoiningFailure;
@property (nonatomic) char hasConnectionJoiningLbConnectionState;
@property (nonatomic) int connectionJoiningLbConnectionState;
@property (nonatomic) char hasConnectionJoiningLbConnectionMigration;
@property (nonatomic) int connectionJoiningLbConnectionMigration;
@property (nonatomic) char hasConnectionServiceId;
@property (nonatomic) unsigned long long connectionServiceId;
@property (nonatomic) char hasConnectionDuration;
@property (nonatomic) long long connectionDuration;
@property (nonatomic) char hasDataPathResult;
@property (nonatomic) int dataPathResult;
@property (nonatomic) char hasBytesSent;
@property (nonatomic) long long bytesSent;
@property (nonatomic) char hasBytesReceived;
@property (nonatomic) long long bytesReceived;
@property (nonatomic) char hasTimeToFirstResponse;
@property (nonatomic) long long timeToFirstResponse;
@property (nonatomic) char hasTimeToConnectionFailure;
@property (nonatomic) long long timeToConnectionFailure;

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
