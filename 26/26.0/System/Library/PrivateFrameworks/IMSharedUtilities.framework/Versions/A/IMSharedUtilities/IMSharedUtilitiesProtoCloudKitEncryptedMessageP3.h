@class NSData;

@interface IMSharedUtilitiesProtoCloudKitEncryptedMessageP3 : PBCodable <NSCopying> {
    struct { unsigned char cmmAssetOffset : 1; unsigned char cmmState : 1; unsigned char version : 1; } _has;
}

@property (nonatomic) BOOL hasVersion;
@property (nonatomic) unsigned int version;
@property (nonatomic) BOOL hasCmmState;
@property (nonatomic) unsigned int cmmState;
@property (nonatomic) BOOL hasCmmAssetOffset;
@property (nonatomic) unsigned int cmmAssetOffset;
@property (readonly, nonatomic) BOOL hasPadding;
@property (retain, nonatomic) NSData *padding;

- (void)copyTo:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
