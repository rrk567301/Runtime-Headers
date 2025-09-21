@class NSString;

@interface AWDIMessageAttachmentUpload : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char attachmentSize : 1; unsigned char connectionType : 1; unsigned char firstLevelMMCSError : 1; unsigned char fourthLevelMMCSError : 1; unsigned char fzError : 1; unsigned char genericError : 1; unsigned char lastPrewarmDuration : 1; unsigned char linkQuality : 1; unsigned char messageError : 1; unsigned char secondLevelMMCSError : 1; unsigned char thirdLevelMMCSError : 1; unsigned char timeFromLastPrewarm : 1; unsigned char tokenError : 1; unsigned char uploadDuration : 1; } _has;
}

@property (readonly, nonatomic) char hasGuid;
@property (retain, nonatomic) NSString *guid;
@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) char hasFzError;
@property (nonatomic) int fzError;
@property (nonatomic) char hasMessageError;
@property (nonatomic) unsigned int messageError;
@property (nonatomic) char hasTokenError;
@property (nonatomic) unsigned int tokenError;
@property (nonatomic) char hasGenericError;
@property (nonatomic) int genericError;
@property (nonatomic) char hasUploadDuration;
@property (nonatomic) unsigned int uploadDuration;
@property (nonatomic) char hasLinkQuality;
@property (nonatomic) int linkQuality;
@property (nonatomic) char hasConnectionType;
@property (nonatomic) unsigned int connectionType;
@property (nonatomic) char hasAttachmentSize;
@property (nonatomic) unsigned int attachmentSize;
@property (nonatomic) char hasTimeFromLastPrewarm;
@property (nonatomic) unsigned int timeFromLastPrewarm;
@property (nonatomic) char hasLastPrewarmDuration;
@property (nonatomic) unsigned int lastPrewarmDuration;
@property (nonatomic) char hasFirstLevelMMCSError;
@property (nonatomic) int firstLevelMMCSError;
@property (readonly, nonatomic) char hasFirstLevelMMCSErrorDomain;
@property (retain, nonatomic) NSString *firstLevelMMCSErrorDomain;
@property (nonatomic) char hasSecondLevelMMCSError;
@property (nonatomic) int secondLevelMMCSError;
@property (readonly, nonatomic) char hasSecondLevelMMCSErrorDomain;
@property (retain, nonatomic) NSString *secondLevelMMCSErrorDomain;
@property (nonatomic) char hasThirdLevelMMCSError;
@property (nonatomic) int thirdLevelMMCSError;
@property (readonly, nonatomic) char hasThirdLevelMMCSErrorDomain;
@property (retain, nonatomic) NSString *thirdLevelMMCSErrorDomain;
@property (nonatomic) char hasFourthLevelMMCSError;
@property (nonatomic) int fourthLevelMMCSError;
@property (readonly, nonatomic) char hasFourthLevelMMCSErrorDomain;
@property (retain, nonatomic) NSString *fourthLevelMMCSErrorDomain;

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
