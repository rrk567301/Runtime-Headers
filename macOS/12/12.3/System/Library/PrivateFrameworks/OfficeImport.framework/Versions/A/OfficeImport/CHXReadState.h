@class EXOfficeArtState, EDResources, CHDChart, OCPPackagePart, CHDChartType, CHDSeries, OADParagraphProperties;
@protocol CHAutoStyling;

@interface CHXReadState : NSObject {
    EXOfficeArtState *mDrawingState;
    CHDChart *mChart;
    EDResources *mResources;
    OCPPackagePart *mChartPart;
    CHDChartType *mCurrentChartType;
    CHDSeries *mCurrentSeries;
    OADParagraphProperties *mDefaultTextProperties;
    BOOL mDefaultTextPropertiesHaveExplicitFontSize;
    id<CHAutoStyling> mAutoStyling;
}

@property (nonatomic) BOOL ignoreFormulas;

- (void).cxx_destruct;
- (id)resources;
- (id)drawingState;
- (void)setResources:(id)a0;
- (void)setChart:(id)a0;
- (id)chart;
- (id)autoStyling;
- (id)initWithDrawingState:(id)a0;
- (id)chartPart;
- (id)defaultTextProperties;
- (void)setDefaultTextPropertiesHaveExplicitFontSize:(BOOL)a0;
- (void)setDefaultTextProperties:(id)a0;
- (void)setCurrentChartType:(id)a0;
- (id)exState;
- (void)pushDefaultTextProperties:(id)a0;
- (void)popDefaultTextProperties;
- (id)currentChartType;
- (void)pushTitleTextProperties:(BOOL)a0;
- (void)popTitleTextProperties;
- (id)currentSeries;
- (void)setChartPart:(id)a0;
- (void)setCurrentSeries:(id)a0;

@end
