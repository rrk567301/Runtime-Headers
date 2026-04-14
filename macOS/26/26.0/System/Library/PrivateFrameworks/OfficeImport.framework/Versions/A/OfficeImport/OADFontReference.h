@class OADColor;

@interface OADFontReference : NSObject <NSCopying> {
    int mIndex;
    OADColor *mColor;
}

- (void)setIndex:(int)a0;
- (int)index;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)color;
- (id)description;
- (void)setColor:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)applyToParagraphProperties:(id)a0;

@end
