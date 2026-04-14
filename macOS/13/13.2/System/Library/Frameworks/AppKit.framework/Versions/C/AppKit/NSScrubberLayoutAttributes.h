@interface NSScrubberLayoutAttributes : NSObject <NSCopying> {
    unsigned char _escapes : 1;
    unsigned int _reservedLayoutAttributeFlags : 31;
}

@property long long itemIndex;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property double alpha;

+ (id)layoutAttributesForItemAtIndex:(long long)a0;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)escapesFromScrollView;
- (void)setEscapesFromScrollView:(BOOL)a0;
- (id)_layoutAttributesByBlendingFraction:(double)a0 ofAttributes:(id)a1;

@end
