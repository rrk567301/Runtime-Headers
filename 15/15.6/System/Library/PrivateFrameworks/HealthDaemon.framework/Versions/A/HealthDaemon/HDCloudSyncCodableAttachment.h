@class NSString, NSData;

@interface HDCloudSyncCodableAttachment : PBCodable <NSCopying> {
    struct { unsigned char creationDate : 1; unsigned char fileSize : 1; } _has;
}

@property (readonly, nonatomic) char hasFileName;
@property (retain, nonatomic) NSString *fileName;
@property (nonatomic) char hasFileSize;
@property (nonatomic) long long fileSize;
@property (readonly, nonatomic) char hasMimeType;
@property (retain, nonatomic) NSString *mimeType;
@property (readonly, nonatomic) char hasFileHash;
@property (retain, nonatomic) NSString *fileHash;
@property (nonatomic) char hasCreationDate;
@property (nonatomic) double creationDate;
@property (readonly, nonatomic) char hasMetadata;
@property (retain, nonatomic) NSData *metadata;
@property (readonly, nonatomic) char hasAssetData;
@property (retain, nonatomic) NSData *assetData;
@property (readonly, nonatomic) char hasEncryptionKey;
@property (retain, nonatomic) NSData *encryptionKey;
@property (readonly, nonatomic) char hasSystemBuildVersion;
@property (retain, nonatomic) NSString *systemBuildVersion;
@property (readonly, nonatomic) char hasProductType;
@property (retain, nonatomic) NSString *productType;
@property (readonly, nonatomic) char hasDeviceName;
@property (retain, nonatomic) NSString *deviceName;

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
