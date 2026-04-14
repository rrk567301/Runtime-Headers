@interface PDAnimationTextTarget : PDAnimationShapeTarget {
    int mType;
    struct _NSRange { unsigned long long location; unsigned long long length; } mRange;
}

- (struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (void)setType:(int)a0;
- (int)type;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void)setRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (unsigned long long)hash;

@end
