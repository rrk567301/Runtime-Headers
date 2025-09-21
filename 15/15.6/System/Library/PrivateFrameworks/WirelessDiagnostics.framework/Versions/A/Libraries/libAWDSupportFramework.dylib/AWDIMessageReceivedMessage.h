@class NSString;

@interface AWDIMessageReceivedMessage : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char fzError : 1; unsigned char hasAttachments : 1; unsigned char isFromEmail : 1; unsigned char isFromPhoneNumber : 1; unsigned char isGroupMessage : 1; unsigned char isTypingIndicator : 1; unsigned char messageError : 1; } _has;
}

@property (readonly, nonatomic) char hasGuid;
@property (retain, nonatomic) NSString *guid;
@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) char hasFzError;
@property (nonatomic) int fzError;
@property (nonatomic) char hasMessageError;
@property (nonatomic) unsigned int messageError;
@property (nonatomic) char hasIsTypingIndicator;
@property (nonatomic) unsigned int isTypingIndicator;
@property (nonatomic) char hasIsGroupMessage;
@property (nonatomic) unsigned int isGroupMessage;
@property (nonatomic) char hasIsFromPhoneNumber;
@property (nonatomic) unsigned int isFromPhoneNumber;
@property (nonatomic) char hasIsFromEmail;
@property (nonatomic) unsigned int isFromEmail;
@property (nonatomic) char hasHasAttachments;
@property (nonatomic) unsigned int hasAttachments;

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
