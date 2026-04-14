@class NSString, NSURL;

@interface FCLoadableFont : NSObject <NSCopying>

@property (copy, nonatomic) NSString *fontName;
@property (retain, nonatomic) NSURL *fontURL;

+ (id)loadableFontWithName:(id)a0 url:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;

@end
