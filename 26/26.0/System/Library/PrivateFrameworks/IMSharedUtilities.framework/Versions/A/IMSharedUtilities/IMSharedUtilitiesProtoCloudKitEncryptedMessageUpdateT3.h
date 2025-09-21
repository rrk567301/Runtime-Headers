@class NSString, NSData;

@interface IMSharedUtilitiesProtoCloudKitEncryptedMessageUpdateT3 : PBCodable <NSCopying> {
    struct { unsigned char version : 1; } _has;
}

@property (nonatomic) BOOL hasVersion;
@property (nonatomic) unsigned int version;
@property (readonly, nonatomic) BOOL hasMsgid;
@property (retain, nonatomic) NSString *msgid;
@property (readonly, nonatomic) BOOL hasChatid;
@property (retain, nonatomic) NSString *chatid;
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
