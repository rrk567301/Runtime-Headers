@interface OADRelativeRect : NSObject <NSCopying> {
    float mLeft;
    float mTop;
    float mRight;
    float mBottom;
}

- (float)right;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (float)left;
- (void)setTop:(float)a0;
- (float)bottom;
- (void)setBottom:(float)a0;
- (id)init;
- (float)top;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)setLeft:(float)a0;
- (void)setRight:(float)a0;
- (id)initWithLeft:(float)a0 top:(float)a1 right:(float)a2 bottom:(float)a3;

@end
