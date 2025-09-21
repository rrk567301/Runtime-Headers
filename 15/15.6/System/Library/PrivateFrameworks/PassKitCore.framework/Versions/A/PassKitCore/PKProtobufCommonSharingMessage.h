@class NSString, NSData;

@interface PKProtobufCommonSharingMessage : PBCodable <NSCopying> {
    struct { unsigned char status : 1; } _has;
}

@property (nonatomic) unsigned int version;
@property (readonly, nonatomic) char hasPhoneInvitation;
@property (retain, nonatomic) NSString *phoneInvitation;
@property (nonatomic) char hasStatus;
@property (nonatomic) int status;
@property (readonly, nonatomic) char hasDataString;
@property (retain, nonatomic) NSString *dataString;
@property (readonly, nonatomic) char hasWatchInvitation;
@property (retain, nonatomic) NSString *watchInvitation;
@property (readonly, nonatomic) char hasUniqueIdentifier;
@property (retain, nonatomic) NSString *uniqueIdentifier;
@property (readonly, nonatomic) char hasPassThumbnailImage;
@property (retain, nonatomic) NSData *passThumbnailImage;
@property (readonly, nonatomic) char hasTitle;
@property (retain, nonatomic) NSString *title;
@property (readonly, nonatomic) char hasTopLeftTitle;
@property (retain, nonatomic) NSString *topLeftTitle;
@property (readonly, nonatomic) char hasTopRightTitle;
@property (retain, nonatomic) NSString *topRightTitle;
@property (readonly, nonatomic) char hasSubtitle;
@property (retain, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) char hasThumbnailImage;
@property (retain, nonatomic) NSData *thumbnailImage;
@property (readonly, nonatomic) char hasActionURL;
@property (retain, nonatomic) NSString *actionURL;
@property (readonly, nonatomic) char hasButtonTitle;
@property (retain, nonatomic) NSString *buttonTitle;
@property (readonly, nonatomic) char hasMessageType;
@property (retain, nonatomic) NSString *messageType;
@property (readonly, nonatomic) char hasMessageData;
@property (retain, nonatomic) NSData *messageData;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)statusAsString:(int)a0;
- (int)StringAsStatus:(id)a0;

@end
