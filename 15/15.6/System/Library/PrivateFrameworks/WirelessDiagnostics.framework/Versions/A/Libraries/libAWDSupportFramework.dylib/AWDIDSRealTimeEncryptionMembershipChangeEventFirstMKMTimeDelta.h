@class NSString;

@interface AWDIDSRealTimeEncryptionMembershipChangeEventFirstMKMTimeDelta : PBCodable <NSCopying> {
    struct { unsigned char timeDelta : 1; unsigned char timestamp : 1; unsigned char activeParticipantBucket : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) char hasServiceName;
@property (retain, nonatomic) NSString *serviceName;
@property (nonatomic) char hasActiveParticipantBucket;
@property (nonatomic) unsigned int activeParticipantBucket;
@property (nonatomic) char hasTimeDelta;
@property (nonatomic) long long timeDelta;

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
