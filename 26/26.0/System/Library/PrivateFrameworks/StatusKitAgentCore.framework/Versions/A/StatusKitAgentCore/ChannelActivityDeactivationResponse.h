@class NSData;

@interface ChannelActivityDeactivationResponse : PBCodable <NSCopying> {
    struct { unsigned char serverTimestampSeconds : 1; unsigned char version : 1; unsigned char retryIntervalSeconds : 1; unsigned char status : 1; } _has;
}

@property (nonatomic) BOOL hasStatus;
@property (nonatomic) int status;
@property (readonly, nonatomic) BOOL hasUuid;
@property (retain, nonatomic) NSData *uuid;
@property (nonatomic) BOOL hasServerTimestampSeconds;
@property (nonatomic) unsigned long long serverTimestampSeconds;
@property (nonatomic) BOOL hasVersion;
@property (nonatomic) unsigned long long version;
@property (nonatomic) BOOL hasRetryIntervalSeconds;
@property (nonatomic) unsigned int retryIntervalSeconds;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (int)StringAsStatus:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)statusAsString:(int)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
