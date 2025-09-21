@class NSString, NSData, NSMutableArray;

@interface CKDPNotificationSyncResponsePushMessage : PBCodable <NSCopying> {
    struct { unsigned char badgeCount : 1; unsigned char source : 1; unsigned char isRead : 1; } _has;
}

@property (nonatomic) char hasIsRead;
@property (nonatomic) char isRead;
@property (readonly, nonatomic) char hasUuid;
@property (retain, nonatomic) NSString *uuid;
@property (nonatomic) char hasSource;
@property (nonatomic) int source;
@property (readonly, nonatomic) char hasDialog;
@property (retain, nonatomic) NSString *dialog;
@property (readonly, nonatomic) char hasSound;
@property (retain, nonatomic) NSString *sound;
@property (nonatomic) char hasBadgeCount;
@property (nonatomic) int badgeCount;
@property (readonly, nonatomic) char hasPayload;
@property (retain, nonatomic) NSData *payload;
@property (readonly, nonatomic) char hasCategory;
@property (retain, nonatomic) NSString *category;
@property (readonly, nonatomic) char hasTitle;
@property (retain, nonatomic) NSString *title;
@property (readonly, nonatomic) char hasTitleLocalizedKey;
@property (retain, nonatomic) NSString *titleLocalizedKey;
@property (retain, nonatomic) NSMutableArray *titleLocalizedArguments;
@property (readonly, nonatomic) char hasSubtitle;
@property (retain, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) char hasSubtitleLocalizedKey;
@property (retain, nonatomic) NSString *subtitleLocalizedKey;
@property (retain, nonatomic) NSMutableArray *subtitleLocalizedArguments;

+ (Class)subtitleLocalizedArgumentsType;
+ (Class)titleLocalizedArgumentsType;

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
- (id)sourceAsString:(int)a0;
- (int)StringAsSource:(id)a0;
- (void)clearSubtitleLocalizedArguments;
- (id)titleLocalizedArgumentsAtIndex:(unsigned long long)a0;
- (unsigned long long)subtitleLocalizedArgumentsCount;
- (void)addSubtitleLocalizedArguments:(id)a0;
- (void)addTitleLocalizedArguments:(id)a0;
- (void)clearTitleLocalizedArguments;
- (id)subtitleLocalizedArgumentsAtIndex:(unsigned long long)a0;
- (unsigned long long)titleLocalizedArgumentsCount;

@end
