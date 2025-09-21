@interface TSDExteriorTextWrap : NSObject <NSCopying, NSMutableCopying>

@property (readonly, nonatomic) char isHTMLWrap;
@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) int direction;
@property (readonly, nonatomic) int fitType;
@property (readonly, nonatomic) double margin;
@property (readonly, nonatomic) double alphaThreshold;

+ (id)exteriorTextWrap;
+ (id)exteriorTextWrapWithIsHTMLWrap:(char)a0 type:(int)a1 direction:(int)a2 fitType:(int)a3 margin:(double)a4 alphaThreshold:(double)a5;
+ (id)defaultExteriorTextWrap;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithArchive:(const void *)a0;
- (id)initWithIsHTMLWrap:(char)a0 type:(int)a1 direction:(int)a2 fitType:(int)a3 margin:(double)a4 alphaThreshold:(double)a5;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;

@end
