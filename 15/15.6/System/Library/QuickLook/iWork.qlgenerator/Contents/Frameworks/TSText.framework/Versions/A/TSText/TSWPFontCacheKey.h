@class NSString, NSArray;

@interface TSWPFontCacheKey : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *fontName;
@property (readonly, nonatomic) double fontSize;
@property (readonly, nonatomic) char hasExtraFields;
@property (readonly, nonatomic) char bold;
@property (readonly, nonatomic) char italic;
@property (readonly, copy, nonatomic) NSArray *fontFeatures;

+ (id)cacheKeyWithFontName:(id)a0 fontSize:(double)a1 bold:(char)a2 italic:(char)a3 fontFeatures:(id)a4;
+ (id)cacheKeyWithFontName:(id)a0 size:(double)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithFontName:(id)a0 fontSize:(double)a1 hasExtraFields:(char)a2 bold:(char)a3 italic:(char)a4 fontFeatures:(id)a5;

@end
