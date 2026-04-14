@class OADColor;

@interface OADFontReference : NSObject <NSCopying> {
    int mIndex;
    OADColor *mColor;
}

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)setIndex:(int)a0;
- (int)index;
- (id)color;
- (void)setColor:(id)a0;
- (void)applyToParagraphProperties:(id)a0;

@end
