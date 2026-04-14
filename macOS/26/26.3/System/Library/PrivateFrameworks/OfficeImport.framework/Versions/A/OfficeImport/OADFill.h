@interface OADFill : OADProperties <NSCopying> {
    BOOL mDefinedByStyle;
}

@property BOOL definedByStyle;

- (id)description;
- (BOOL)isOverridden;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (float)alpha;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)setStyleColor:(id)a0;
- (BOOL)usesPlaceholderColor;

@end
