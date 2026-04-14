@interface TSWPListLabelGeometry : NSObject

@property (nonatomic) double scale;
@property (nonatomic) double baselineOffset;
@property (nonatomic) BOOL scaleWithText;

+ (id)listLabelGeometry;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (id)initWithScale:(double)a0 scaleWithText:(BOOL)a1 baselineOffset:(double)a2;

@end
