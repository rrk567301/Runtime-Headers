@class NSString, NSData;

@interface IMSharedUtilitiesProtoCloudKitEncryptedMessageUpdateT3 : PBCodable <NSCopying> {
    struct { unsigned char version : 1; } _has;
}

@property (nonatomic) char hasVersion;
@property (nonatomic) unsigned int version;
@property (readonly, nonatomic) char hasMsgid;
@property (retain, nonatomic) NSString *msgid;
@property (readonly, nonatomic) char hasChatid;
@property (retain, nonatomic) NSString *chatid;
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
