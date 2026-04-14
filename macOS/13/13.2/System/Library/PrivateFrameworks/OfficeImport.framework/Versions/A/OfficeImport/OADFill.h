@interface OADFill : OADProperties <NSCopying> {
    BOOL mDefinedByStyle;
}

@property BOOL definedByStyle;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (float)alpha;
- (void)setStyleColor:(id)a0;
- (BOOL)usesPlaceholderColor;
- (BOOL)isOverridden;

@end
