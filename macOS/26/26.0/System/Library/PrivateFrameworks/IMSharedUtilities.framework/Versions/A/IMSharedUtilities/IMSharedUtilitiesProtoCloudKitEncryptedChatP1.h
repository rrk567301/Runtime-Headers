@interface IMSharedUtilitiesProtoCloudKitEncryptedChatP1 : PBCodable <NSCopying> {
    struct { unsigned char version : 1; unsigned char isRecovered : 1; } _has;
}

@property (nonatomic) BOOL hasVersion;
@property (nonatomic) unsigned int version;
@property (nonatomic) BOOL hasIsRecovered;
@property (nonatomic) BOOL isRecovered;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
