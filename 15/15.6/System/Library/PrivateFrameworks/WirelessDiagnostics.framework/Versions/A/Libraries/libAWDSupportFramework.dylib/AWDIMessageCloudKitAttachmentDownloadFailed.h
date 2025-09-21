@class NSString;

@interface AWDIMessageCloudKitAttachmentDownloadFailed : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char attachmentSize : 1; unsigned char connectionType : 1; unsigned char errorCode : 1; unsigned char linkQuality : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) char hasMessageGuid;
@property (retain, nonatomic) NSString *messageGuid;
@property (readonly, nonatomic) char hasAttachmentGuid;
@property (retain, nonatomic) NSString *attachmentGuid;
@property (readonly, nonatomic) char hasErrorDomain;
@property (retain, nonatomic) NSString *errorDomain;
@property (nonatomic) char hasErrorCode;
@property (nonatomic) int errorCode;
@property (nonatomic) char hasLinkQuality;
@property (nonatomic) int linkQuality;
@property (nonatomic) char hasConnectionType;
@property (nonatomic) unsigned int connectionType;
@property (nonatomic) char hasAttachmentSize;
@property (nonatomic) unsigned int attachmentSize;

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
