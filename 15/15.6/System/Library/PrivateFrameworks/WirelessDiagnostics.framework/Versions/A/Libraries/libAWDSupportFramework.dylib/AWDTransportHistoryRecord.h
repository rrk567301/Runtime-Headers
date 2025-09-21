@class NSMutableArray;

@interface AWDTransportHistoryRecord : PBCodable <NSCopying> {
    struct { unsigned char timestampFailure : 1; unsigned char connectionMethod : 1; unsigned char transport : 1; unsigned char transportSwitchReasonErrorCode : 1; unsigned char transportSwitchReasonErrorDomain : 1; } _has;
}

@property (nonatomic) char hasTransport;
@property (nonatomic) int transport;
@property (nonatomic) char hasConnectionMethod;
@property (nonatomic) int connectionMethod;
@property (retain, nonatomic) NSMutableArray *connectionInfos;
@property (nonatomic) char hasTransportSwitchReasonErrorDomain;
@property (nonatomic) int transportSwitchReasonErrorDomain;
@property (nonatomic) char hasTransportSwitchReasonErrorCode;
@property (nonatomic) unsigned int transportSwitchReasonErrorCode;
@property (nonatomic) char hasTimestampFailure;
@property (nonatomic) unsigned long long timestampFailure;

+ (Class)connectionInfoType;

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
- (int)StringAsConnectionMethod:(id)a0;
- (int)StringAsTransport:(id)a0;
- (int)StringAsTransportSwitchReasonErrorDomain:(id)a0;
- (void)addConnectionInfo:(id)a0;
- (void)clearConnectionInfos;
- (id)connectionInfoAtIndex:(unsigned long long)a0;
- (unsigned long long)connectionInfosCount;
- (id)connectionMethodAsString:(int)a0;
- (id)transportAsString:(int)a0;
- (id)transportSwitchReasonErrorDomainAsString:(int)a0;

@end
