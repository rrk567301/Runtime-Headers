@class NSString;

@interface AWDIDSRealTimeEncryptionMembershipChangeEventFirstMKMTimeDelta : PBCodable <NSCopying> {
    struct { unsigned char timeDelta : 1; unsigned char timestamp : 1; unsigned char activeParticipantBucket : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) BOOL hasServiceName;
@property (retain, nonatomic) NSString *serviceName;
@property (nonatomic) BOOL hasActiveParticipantBucket;
@property (nonatomic) unsigned int activeParticipantBucket;
@property (nonatomic) BOOL hasTimeDelta;
@property (nonatomic) long long timeDelta;

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
