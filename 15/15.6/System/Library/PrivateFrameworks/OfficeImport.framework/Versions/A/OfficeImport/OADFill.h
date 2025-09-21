@interface OADFill : OADProperties <NSCopying> {
    char mDefinedByStyle;
}

@property char definedByStyle;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (float)alpha;
- (char)isOverridden;
- (void)setStyleColor:(id)a0;
- (char)usesPlaceholderColor;

@end
