@interface OADSchemeColor : OADColor {
    int mIndex;
}

+ (id)schemeColorWithIndex:(int)a0;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSchemeColorIndex:(int)a0;
- (int)schemeColorIndex;

@end
