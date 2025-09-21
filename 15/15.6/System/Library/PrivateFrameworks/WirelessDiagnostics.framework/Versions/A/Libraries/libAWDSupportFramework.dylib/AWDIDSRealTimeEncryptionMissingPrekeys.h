@class NSString;

@interface AWDIDSRealTimeEncryptionMissingPrekeys : PBCodable <NSCopying> {
    struct { unsigned char activeParticipants : 1; unsigned char missingPrekeys : 1; unsigned char timestamp : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) char hasServiceName;
@property (retain, nonatomic) NSString *serviceName;
@property (nonatomic) char hasActiveParticipants;
@property (nonatomic) unsigned long long activeParticipants;
@property (nonatomic) char hasMissingPrekeys;
@property (nonatomic) unsigned long long missingPrekeys;

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
