@class NSString;

@interface AWDIDSSessionStarted : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char clientType : 1; unsigned char sessionProtocolVersionNumber : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) char hasGuid;
@property (retain, nonatomic) NSString *guid;
@property (nonatomic) char hasSessionProtocolVersionNumber;
@property (nonatomic) unsigned int sessionProtocolVersionNumber;
@property (readonly, nonatomic) char hasServiceName;
@property (retain, nonatomic) NSString *serviceName;
@property (nonatomic) char hasClientType;
@property (nonatomic) int clientType;

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
