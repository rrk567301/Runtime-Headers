@interface PDAnimationTextTarget : PDAnimationShapeTarget {
    int mType;
    struct _NSRange { unsigned long long location; unsigned long long length; } mRange;
}

- (struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (int)type;
- (unsigned long long)hash;
- (void)setRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)setType:(int)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;

@end
