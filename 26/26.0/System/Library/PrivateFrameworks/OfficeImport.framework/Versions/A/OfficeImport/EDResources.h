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

- (id)fonts;
- (void)setColors:(id)a0;
- (id)links;
- (id)names;
- (id)description;
- (id)colors;
- (id)styles;
- (void).cxx_destruct;
- (id)strings;
- (id)fills;
- (id)border;
- (id)borders;
- (id)alignmentInfos;
- (id)contentFormats;
- (id)differentialStyles;
- (id)initWithStringOptimization:(BOOL)a0;
- (void)setThemes:(id)a0;
- (id)tableStyles;
- (id)themes;

@end
