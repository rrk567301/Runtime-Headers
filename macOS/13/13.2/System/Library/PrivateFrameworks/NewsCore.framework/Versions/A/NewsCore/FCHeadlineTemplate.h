@class FCColor, FCTextInfo, NSArray;

@interface FCHeadlineTemplate : NSObject <NSCopying>

@property (copy, nonatomic) FCTextInfo *headlineTitleTextInfo;
@property (copy, nonatomic) FCTextInfo *headlineExcerptTextInfo;
@property (copy, nonatomic) FCTextInfo *headlineBylineTextInfo;
@property (copy, nonatomic) FCColor *backgroundColor;
@property (copy, nonatomic) NSArray *loadableFonts;

+ (id)_defaultBackgroundColor;
+ (id)headlineTemplateWithJSON:(id)a0;
+ (id)_headlineTemplateWithJSON:(id)a0 versionNumber:(id)a1;
+ (id)templateByMergingTemplate:(id)a0 intoTemplate:(id)a1;
+ (id)_defaultTitleTextColor;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)mergeFromTemplate:(id)a0;
- (id)initWithJSONDictionary:(id)a0 versionNumber:(long long)a1;
- (id)_allThemePropertyNames;

@end
