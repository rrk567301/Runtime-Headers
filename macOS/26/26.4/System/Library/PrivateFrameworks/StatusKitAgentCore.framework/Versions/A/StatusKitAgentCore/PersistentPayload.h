@class NSData, NSString;

@interface PersistentPayload : PBCodable <NSCopying> {
    struct { unsigned char payloadExpirationEpochSeconds : 1; unsigned char payloadVersion : 1; } _has;
}

@property (nonatomic) BOOL hasPayloadVersion;
@property (nonatomic) unsigned int payloadVersion;
@property (readonly, nonatomic) BOOL hasEncryptedPayload;
@property (retain, nonatomic) NSData *encryptedPayload;
@property (nonatomic) BOOL hasPayloadExpirationEpochSeconds;
@property (nonatomic) unsigned long long payloadExpirationEpochSeconds;
@property (readonly, nonatomic) BOOL hasKey;
@property (retain, nonatomic) NSString *key;

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
