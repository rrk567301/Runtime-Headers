@class NSString;

@interface AWDIMessageCloudKitValidatePurgeableAttachment : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char attachmentSize : 1; unsigned char connectionType : 1; unsigned char linkQuality : 1; unsigned char operationalErrorCode : 1; unsigned char validatedAttachment : 1; unsigned char validationErrorCode : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) char hasValidatedAttachment;
@property (nonatomic) unsigned int validatedAttachment;
@property (nonatomic) char hasAttachmentSize;
@property (nonatomic) unsigned int attachmentSize;
@property (readonly, nonatomic) char hasOperationalErrorDomain;
@property (retain, nonatomic) NSString *operationalErrorDomain;
@property (nonatomic) char hasOperationalErrorCode;
@property (nonatomic) unsigned int operationalErrorCode;
@property (readonly, nonatomic) char hasValidationErrorDomain;
@property (retain, nonatomic) NSString *validationErrorDomain;
@property (nonatomic) char hasValidationErrorCode;
@property (nonatomic) unsigned int validationErrorCode;
@property (nonatomic) char hasLinkQuality;
@property (nonatomic) int linkQuality;
@property (nonatomic) char hasConnectionType;
@property (nonatomic) unsigned int connectionType;

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
