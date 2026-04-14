@class NSData;

@interface NSPPrivacyProxyTokenKey : PBCodable <NSCopying> {
    struct { unsigned char expiration : 1; unsigned char rotation : 1; unsigned char metadataSize : 1; unsigned char tokenType : 1; } _has;
}

@property (retain, nonatomic) NSData *key;
@property (nonatomic) BOOL hasExpiration;
@property (nonatomic) unsigned long long expiration;
@property (nonatomic) BOOL hasRotation;
@property (nonatomic) unsigned long long rotation;
@property (nonatomic) BOOL hasTokenType;
@property (nonatomic) unsigned int tokenType;
@property (nonatomic) BOOL hasMetadataSize;
@property (nonatomic) unsigned int metadataSize;

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;

@end
