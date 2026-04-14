@class EDResources, EDCollection, OADGraphicProperties, NSArray;

@interface CHDLegend : NSObject {
    int mLegendPosition;
    OADGraphicProperties *mGraphicProperties;
    unsigned long long mFontIndex;
    EDCollection *mLegendEntries;
    EDResources *mResources;
    BOOL mIsVertical;
    BOOL mIsOverlay;
    NSArray *mLabelEffects;
}

- (id)description;
- (void).cxx_destruct;
- (id)font;
- (void)setFont:(id)a0;
- (id)initWithResources:(id)a0;
- (id)graphicProperties;
- (int)legendPosition;
- (void)setLegendPosition:(int)a0;
- (id)legendEntries;
- (BOOL)isSingleColumnLegend;
- (void)setIsSingleColumnLegend:(BOOL)a0;
- (BOOL)isOverlay;
- (void)setIsOverlay:(BOOL)a0;
- (id)labelEffects;
- (void)setLabelEffects:(id)a0;
- (BOOL)isAutoSizeAndPosition;
- (unsigned long long)fontIndex;
- (void)setFontIndex:(unsigned long long)a0;
- (void)setGraphicProperties:(id)a0;

@end
