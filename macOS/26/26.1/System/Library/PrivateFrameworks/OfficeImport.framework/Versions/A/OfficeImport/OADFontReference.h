@class OADColor;

@interface OADFontReference : NSObject <NSCopying> {
    int mIndex;
    OADColor *mColor;
}

- (int)index;
- (void)setIndex:(int)a0;
- (unsigned long long)hash;
- (void)setColor:(id)a0;
- (id)color;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)applyToParagraphProperties:(id)a0;

@end
