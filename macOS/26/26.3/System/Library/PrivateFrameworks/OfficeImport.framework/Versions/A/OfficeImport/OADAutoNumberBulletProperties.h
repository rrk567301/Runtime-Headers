@interface OADAutoNumberBulletProperties : OADBulletProperties {
    int mSchemeType;
    unsigned long long mStartIndex;
}

- (unsigned long long)startIndex;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (int)autoNumberSchemeType;
- (id)initWithAutoNumberSchemeType:(int)a0 startIndex:(unsigned long long)a1;

@end
