@class NSString;

@interface AWDIDSSessionStarted : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char clientType : 1; unsigned char sessionProtocolVersionNumber : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) BOOL hasGuid;
@property (retain, nonatomic) NSString *guid;
@property (nonatomic) BOOL hasSessionProtocolVersionNumber;
@property (nonatomic) unsigned int sessionProtocolVersionNumber;
@property (readonly, nonatomic) BOOL hasServiceName;
@property (retain, nonatomic) NSString *serviceName;
@property (nonatomic) BOOL hasClientType;
@property (nonatomic) int clientType;

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
