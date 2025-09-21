@class NSData;

@interface ChannelActivityUpdate : PBCodable <NSCopying> {
    struct { unsigned char currentVersion : 1; unsigned char prevVersion : 1; } _has;
}

@property (nonatomic) char hasCurrentVersion;
@property (nonatomic) unsigned long long currentVersion;
@property (nonatomic) char hasPrevVersion;
@property (nonatomic) unsigned long long prevVersion;
@property (readonly, nonatomic) char hasEncryptedUpdatePayload;
@property (retain, nonatomic) NSData *encryptedUpdatePayload;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
