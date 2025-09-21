@class NSString, NSMutableArray;

@interface CKDPSubscriptionNotificationAlert : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasText;
@property (retain, nonatomic) NSString *text;
@property (readonly, nonatomic) char hasLocalizedKey;
@property (retain, nonatomic) NSString *localizedKey;
@property (retain, nonatomic) NSMutableArray *localizedArguments;
@property (readonly, nonatomic) char hasActionLocKey;
@property (retain, nonatomic) NSString *actionLocKey;
@property (readonly, nonatomic) char hasLaunchImage;
@property (retain, nonatomic) NSString *launchImage;
@property (readonly, nonatomic) char hasSoundName;
@property (retain, nonatomic) NSString *soundName;
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

+ (Class)localizedArgumentsType;
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
- (void)clearSubtitleLocalizedArguments;
- (id)titleLocalizedArgumentsAtIndex:(unsigned long long)a0;
- (unsigned long long)subtitleLocalizedArgumentsCount;
- (void)addLocalizedArguments:(id)a0;
- (void)addSubtitleLocalizedArguments:(id)a0;
- (void)addTitleLocalizedArguments:(id)a0;
- (void)clearLocalizedArguments;
- (void)clearTitleLocalizedArguments;
- (id)localizedArgumentsAtIndex:(unsigned long long)a0;
- (unsigned long long)localizedArgumentsCount;
- (id)subtitleLocalizedArgumentsAtIndex:(unsigned long long)a0;
- (unsigned long long)titleLocalizedArgumentsCount;

@end
