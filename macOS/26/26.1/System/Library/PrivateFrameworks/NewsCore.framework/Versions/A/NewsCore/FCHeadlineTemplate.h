@class FCColor, FCTextInfo, NSArray;

@interface FCHeadlineTemplate : NSObject <NSCopying>

@property (copy, nonatomic) FCTextInfo *headlineTitleTextInfo;
@property (copy, nonatomic) FCTextInfo *headlineExcerptTextInfo;
@property (copy, nonatomic) FCTextInfo *headlineBylineTextInfo;
@property (copy, nonatomic) FCColor *backgroundColor;
@property (copy, nonatomic) NSArray *loadableFonts;

+ (id)_defaultBackgroundColor;
+ (id)_defaultTitleTextColor;
+ (id)_headlineTemplateWithJSON:(id)a0 versionNumber:(id)a1 URLGenerator:(id)a2;
+ (id)headlineTemplateWithJSON:(id)a0 URLGenerator:(id)a1;
+ (id)templateByMergingTemplate:(id)a0 intoTemplate:(id)a1;

- (unsigned long long)hash;
- (id)_allThemePropertyNames;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithJSONDictionary:(id)a0 versionNumber:(long long)a1 URLGenerator:(id)a2;
- (BOOL)isEqual:(id)a0;
- (void)mergeFromTemplate:(id)a0;
- (id)init;

@end
