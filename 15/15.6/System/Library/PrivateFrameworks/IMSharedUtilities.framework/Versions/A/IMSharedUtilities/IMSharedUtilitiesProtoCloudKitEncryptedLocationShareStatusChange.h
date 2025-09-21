@class NSString, NSData;

@interface IMSharedUtilitiesProtoCloudKitEncryptedLocationShareStatusChange : PBCodable <NSCopying> {
    struct { unsigned char shareDirection : 1; unsigned char shareStatus : 1; unsigned char version : 1; } _has;
}

@property (nonatomic) char hasVersion;
@property (nonatomic) unsigned int version;
@property (nonatomic) char hasShareStatus;
@property (nonatomic) long long shareStatus;
@property (nonatomic) char hasShareDirection;
@property (nonatomic) long long shareDirection;
@property (readonly, nonatomic) char hasOtherHandle;
@property (retain, nonatomic) NSString *otherHandle;
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
