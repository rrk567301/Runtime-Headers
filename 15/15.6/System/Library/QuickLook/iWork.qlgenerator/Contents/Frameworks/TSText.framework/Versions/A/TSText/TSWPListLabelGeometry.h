@interface TSWPListLabelGeometry : NSObject

@property (nonatomic) double scale;
@property (nonatomic) double baselineOffset;
@property (nonatomic) char scaleWithText;

+ (id)listLabelGeometry;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (id)initWithScale:(double)a0 scaleWithText:(char)a1 baselineOffset:(double)a2;

@end
