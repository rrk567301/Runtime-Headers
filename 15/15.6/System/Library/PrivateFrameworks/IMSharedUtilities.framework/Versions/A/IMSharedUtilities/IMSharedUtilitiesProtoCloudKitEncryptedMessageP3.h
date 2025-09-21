@class NSData;

@interface IMSharedUtilitiesProtoCloudKitEncryptedMessageP3 : PBCodable <NSCopying> {
    struct { unsigned char cmmAssetOffset : 1; unsigned char cmmState : 1; unsigned char version : 1; } _has;
}

@property (nonatomic) char hasVersion;
@property (nonatomic) unsigned int version;
@property (nonatomic) char hasCmmState;
@property (nonatomic) unsigned int cmmState;
@property (nonatomic) char hasCmmAssetOffset;
@property (nonatomic) unsigned int cmmAssetOffset;
@property (readonly, nonatomic) char hasPadding;
@property (retain, nonatomic) NSData *padding;

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
