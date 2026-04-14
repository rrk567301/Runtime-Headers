@class EDProcessors, ESDContainer, EDWarnings, EDWorkbook, EDPageSetup, EDString, EDColorReference, EDHeaderFooter, NSMutableArray, OITSUPointerKeyDictionary;

@interface EDSheet : OCDDelayedNode {
    EDString *mName;
    BOOL mHidden;
    BOOL mDisplayFormulas;
    BOOL mDisplayGridlines;
    EDColorReference *mDefaultGridlineColorReference;
    EDHeaderFooter *mHeaderFooter;
    EDPageSetup *mPageSetup;
    NSMutableArray *mDrawables;
    OITSUPointerKeyDictionary *mTextBoxMap;
    OITSUPointerKeyDictionary *mCommentMap;
    EDProcessors *mProcessors;
    EDWarnings *mWarnings;
    ESDContainer *mEscherDrawing;
}

@property (nonatomic) BOOL isDialogSheet;
@property (readonly, weak) EDWorkbook *workbook;

+ (id)sheetWithWorkbook:(id)a0;

- (void)dealloc;
- (id)name;
- (id)description;
- (BOOL)isHidden;
- (void)setHidden:(BOOL)a0;
- (void).cxx_destruct;
- (void)setName:(id)a0;
- (id)warnings;
- (unsigned long long)drawableCount;
- (void)setup;
- (void)teardown;
- (id)drawables;
- (void)addDrawable:(id)a0;
- (id)processors;
- (id)pageSetup;
- (id)initWithWorkbook:(id)a0;
- (void)doneWithNonRowContent;
- (BOOL)isDisplayFormulas;
- (void)setDisplayFormulas:(BOOL)a0;
- (BOOL)isDisplayGridlines;
- (void)setDisplayGridlines:(BOOL)a0;
- (id)defaultGridlineColor;
- (void)setDefaultGridlineColor:(id)a0;
- (id)headerFooter;
- (void)setHeaderFooter:(id)a0;
- (void)setPageSetup:(id)a0;
- (id)drawableAtIndex:(unsigned long long)a0;
- (void)removeDrawableAtIndex:(unsigned long long)a0;
- (id)edTextBoxForShape:(id)a0;
- (void)setEDTextBox:(id)a0 forShape:(id)a1;
- (unsigned long long)commentCount;
- (id)edCommentForShape:(id)a0;
- (void)setEDComment:(id)a0 forShape:(id)a1;
- (id)escherDrawing;
- (void)setEscherDrawing:(id)a0;
- (id)defaultGridlineColorReference;
- (void)setDefaultGridlineColorReference:(id)a0;
- (id)drawableEnumerator;
- (void)applyProcessors;
- (void)reduceMemoryIfPossible;

@end
