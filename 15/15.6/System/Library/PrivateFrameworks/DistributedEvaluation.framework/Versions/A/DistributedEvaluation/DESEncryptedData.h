@class NSData, NSString;

@interface DESEncryptedData : PBCodable <NSCopying> {
    struct { unsigned char version : 1; } _has;
}

@property (nonatomic) char hasVersion;
@property (nonatomic) int version;
@property (retain, nonatomic) NSData *data;
@property (readonly, nonatomic) char hasEncryptedKey;
@property (retain, nonatomic) NSData *encryptedKey;
@property (readonly, nonatomic) char hasAlgorithm;
@property (retain, nonatomic) NSString *algorithm;

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
