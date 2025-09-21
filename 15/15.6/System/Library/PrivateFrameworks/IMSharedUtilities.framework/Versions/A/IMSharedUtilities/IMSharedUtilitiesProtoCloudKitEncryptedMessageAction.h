@class NSString, NSData;

@interface IMSharedUtilitiesProtoCloudKitEncryptedMessageAction : PBCodable <NSCopying> {
    struct { unsigned char messageActionType : 1; unsigned char version : 1; } _has;
}

@property (nonatomic) char hasVersion;
@property (nonatomic) unsigned int version;
@property (nonatomic) char hasMessageActionType;
@property (nonatomic) long long messageActionType;
@property (readonly, nonatomic) char hasOtherHandle;
@property (retain, nonatomic) NSString *otherHandle;
@property (readonly, nonatomic) char hasOriginalMessageGuid;
@property (retain, nonatomic) NSString *originalMessageGuid;
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
