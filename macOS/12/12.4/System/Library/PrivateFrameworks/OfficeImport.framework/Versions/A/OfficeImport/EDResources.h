@class EDCollection, EDContentFormatsCollection, EDFontsCollection, EDColorsCollection, EDLinksCollection, EDTableStylesCollection, EDStylesCollection;

@interface EDResources : NSObject {
    EDCollection *mStrings;
    EDContentFormatsCollection *mContentFormats;
    EDFontsCollection *mFonts;
    EDCollection *mAlignmentInfos;
    EDStylesCollection *mStyles;
    EDColorsCollection *mColors;
    EDColorsCollection *mThemes;
    EDCollection *mNames;
    EDLinksCollection *mLinks;
    EDCollection *mBorders;
    EDCollection *mBorder;
    EDCollection *mFills;
    EDCollection *mDifferentialStyles;
    EDTableStylesCollection *mTableStyles;
}

- (id)description;
- (void).cxx_destruct;
- (void)setColors:(id)a0;
- (id)colors;
- (id)styles;
- (id)links;
- (id)names;
- (id)fonts;
- (id)border;
- (id)fills;
- (id)tableStyles;
- (id)contentFormats;
- (id)initWithStringOptimization:(BOOL)a0;
- (id)strings;
- (id)borders;
- (id)alignmentInfos;
- (id)differentialStyles;
- (id)themes;
- (void)setThemes:(id)a0;

@end
