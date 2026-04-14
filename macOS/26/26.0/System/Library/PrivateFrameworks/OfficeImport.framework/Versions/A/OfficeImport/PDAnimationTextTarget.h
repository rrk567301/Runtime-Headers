@interface PDAnimationTextTarget : PDAnimationShapeTarget {
    int mType;
    struct _NSRange { unsigned long long location; unsigned long long length; } mRange;
}

- (void)setRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (int)type;
- (id)init;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (void)setType:(int)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
