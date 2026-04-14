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

- (void)setColors:(id)a0;
- (id)fonts;
- (id)names;
- (id)colors;
- (id)description;
- (id)styles;
- (void).cxx_destruct;
- (id)links;
- (id)strings;
- (id)border;
- (id)borders;
- (id)alignmentInfos;
- (id)contentFormats;
- (id)differentialStyles;
- (id)fills;
- (id)initWithStringOptimization:(BOOL)a0;
- (void)setThemes:(id)a0;
- (id)tableStyles;
- (id)themes;

@end
