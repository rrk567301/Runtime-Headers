@interface TSCH3DLabelBitmapContextInfo : NSObject <NSCopying>

@property (readonly, nonatomic) char isPDF;
@property (readonly, nonatomic) char isPrinting;
@property (readonly, nonatomic) char hasSuppressedBackgrounds;

+ (id)context;
+ (id)contextInfoForScene:(id)a0;
+ (id)contextInfoWithIsPrinting:(char)a0 isPDF:(char)a1 hasSuppressedBackgrounds:(char)a2;
+ (void)setIsPrinting:(char)a0 isPDF:(char)a1 hasSuppressedBackgrounds:(char)a2 forScene:(id)a3;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithIsPrinting:(char)a0 isPDF:(char)a1 hasSuppressedBackgrounds:(char)a2;
- (void)setTSDCGContextInfoForCGContext:(struct CGContext { } *)a0;

@end
