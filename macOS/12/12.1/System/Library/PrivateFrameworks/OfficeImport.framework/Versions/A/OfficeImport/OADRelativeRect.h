@interface OADRelativeRect : NSObject <NSCopying> {
    float mLeft;
    float mTop;
    float mRight;
    float mBottom;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (float)left;
- (float)right;
- (float)top;
- (float)bottom;
- (void)setLeft:(float)a0;
- (void)setBottom:(float)a0;
- (void)setRight:(float)a0;
- (void)setTop:(float)a0;
- (id)initWithLeft:(float)a0 top:(float)a1 right:(float)a2 bottom:(float)a3;

@end
