@class NSString;

@interface AWDSMSSentMessage : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char ctError : 1; unsigned char fzError : 1; unsigned char hasAttachments : 1; unsigned char isGroupMessage : 1; unsigned char isToEmail : 1; unsigned char isToPhoneNumber : 1; unsigned char sendDuration : 1; } _has;
}

@property (readonly, nonatomic) char hasGuid;
@property (retain, nonatomic) NSString *guid;
@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) char hasFzError;
@property (nonatomic) int fzError;
@property (nonatomic) char hasCtError;
@property (nonatomic) int ctError;
@property (nonatomic) char hasIsGroupMessage;
@property (nonatomic) unsigned int isGroupMessage;
@property (nonatomic) char hasIsToPhoneNumber;
@property (nonatomic) unsigned int isToPhoneNumber;
@property (nonatomic) char hasIsToEmail;
@property (nonatomic) unsigned int isToEmail;
@property (nonatomic) char hasHasAttachments;
@property (nonatomic) unsigned int hasAttachments;
@property (nonatomic) char hasSendDuration;
@property (nonatomic) unsigned int sendDuration;

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
