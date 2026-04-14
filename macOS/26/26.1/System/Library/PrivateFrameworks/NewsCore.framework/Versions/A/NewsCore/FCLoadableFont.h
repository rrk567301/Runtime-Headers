@class NSString, NSURL;

@interface FCLoadableFont : NSObject <NSCopying>

@property (copy, nonatomic) NSString *fontName;
@property (retain, nonatomic) NSURL *fontURL;

+ (id)loadableFontWithName:(id)a0 url:(id)a1;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;

@end
