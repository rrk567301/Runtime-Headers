@class NSAttributedString;

@interface _MKMultiPartLabelCacheKey : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSAttributedString *attributedString;
@property (readonly, nonatomic) struct CGSize { double width; double height; } size;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithAttributedString:(id)a0 size:(struct CGSize { double x0; double x1; })a1;

@end
