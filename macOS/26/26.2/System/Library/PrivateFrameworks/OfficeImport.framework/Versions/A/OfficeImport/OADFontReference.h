@class OADColor;

@interface OADFontReference : NSObject <NSCopying> {
    int mIndex;
    OADColor *mColor;
}

- (int)index;
- (unsigned long long)hash;
- (id)color;
- (BOOL)isEqual:(id)a0;
- (void)setColor:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (void)setIndex:(int)a0;
- (void)applyToParagraphProperties:(id)a0;

@end
