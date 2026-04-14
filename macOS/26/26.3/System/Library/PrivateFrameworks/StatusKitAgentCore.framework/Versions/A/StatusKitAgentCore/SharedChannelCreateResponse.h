@class ChannelIdentity;

@interface SharedChannelCreateResponse : PBCodable <NSCopying> {
    struct { unsigned char serverTimestampSeconds : 1; unsigned char retryIntervalSeconds : 1; unsigned char status : 1; } _has;
}

@property (nonatomic) BOOL hasStatus;
@property (nonatomic) int status;
@property (readonly, nonatomic) BOOL hasChannelIdentity;
@property (retain, nonatomic) ChannelIdentity *channelIdentity;
@property (nonatomic) BOOL hasRetryIntervalSeconds;
@property (nonatomic) unsigned int retryIntervalSeconds;
@property (nonatomic) BOOL hasServerTimestampSeconds;
@property (nonatomic) unsigned long long serverTimestampSeconds;

- (int)StringAsStatus:(id)a0;
- (id)dictionaryRepresentation;
- (id)statusAsString:(int)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
