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
- (id)borders;
- (id)strings;
- (id)contentFormats;
- (id)alignmentInfos;
- (id)themes;
- (id)differentialStyles;
- (void)setThemes:(id)a0;
- (id)initWithStringOptimization:(BOOL)a0;

@end
