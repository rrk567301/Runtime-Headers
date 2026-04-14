@class NSData;

@interface ChannelActivityUpdate : PBCodable <NSCopying> {
    struct { unsigned char currentVersion : 1; unsigned char prevVersion : 1; } _has;
}

@property (nonatomic) BOOL hasCurrentVersion;
@property (nonatomic) unsigned long long currentVersion;
@property (nonatomic) BOOL hasPrevVersion;
@property (nonatomic) unsigned long long prevVersion;
@property (readonly, nonatomic) BOOL hasEncryptedUpdatePayload;
@property (retain, nonatomic) NSData *encryptedUpdatePayload;
@property (readonly, nonatomic) BOOL hasEncryptedPersistedUpdatePayload;
@property (retain, nonatomic) NSData *encryptedPersistedUpdatePayload;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;

@end
