@class NSString, NSMutableArray;

@interface CKDPSubscriptionNotificationAlert : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasText;
@property (retain, nonatomic) NSString *text;
@property (readonly, nonatomic) BOOL hasLocalizedKey;
@property (retain, nonatomic) NSString *localizedKey;
@property (retain, nonatomic) NSMutableArray *localizedArguments;
@property (readonly, nonatomic) BOOL hasActionLocKey;
@property (retain, nonatomic) NSString *actionLocKey;
@property (readonly, nonatomic) BOOL hasLaunchImage;
@property (retain, nonatomic) NSString *launchImage;
@property (readonly, nonatomic) BOOL hasSoundName;
@property (retain, nonatomic) NSString *soundName;
@property (readonly, nonatomic) BOOL hasCategory;
@property (retain, nonatomic) NSString *category;
@property (readonly, nonatomic) BOOL hasTitle;
@property (retain, nonatomic) NSString *title;
@property (readonly, nonatomic) BOOL hasTitleLocalizedKey;
@property (retain, nonatomic) NSString *titleLocalizedKey;
@property (retain, nonatomic) NSMutableArray *titleLocalizedArguments;
@property (readonly, nonatomic) BOOL hasSubtitle;
@property (retain, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) BOOL hasSubtitleLocalizedKey;
@property (retain, nonatomic) NSString *subtitleLocalizedKey;
@property (retain, nonatomic) NSMutableArray *subtitleLocalizedArguments;

+ (Class)localizedArgumentsType;
+ (Class)subtitleLocalizedArgumentsType;
+ (Class)titleLocalizedArgumentsType;

- (id)localizedArgumentsAtIndex:(unsigned long long)a0;
- (unsigned long long)titleLocalizedArgumentsCount;
- (void)writeTo:(id)a0;
- (unsigned long long)subtitleLocalizedArgumentsCount;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)clearLocalizedArguments;
- (void)addSubtitleLocalizedArguments:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)titleLocalizedArgumentsAtIndex:(unsigned long long)a0;
- (void)copyTo:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)localizedArgumentsCount;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void)clearTitleLocalizedArguments;
- (id)subtitleLocalizedArgumentsAtIndex:(unsigned long long)a0;
- (void)addTitleLocalizedArguments:(id)a0;
- (void)addLocalizedArguments:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearSubtitleLocalizedArguments;

@end
