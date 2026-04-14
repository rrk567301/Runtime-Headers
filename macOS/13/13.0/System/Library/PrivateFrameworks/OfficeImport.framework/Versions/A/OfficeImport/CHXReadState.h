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
- (id)autoStyling;
- (id)chart;
- (id)defaultTextProperties;
- (void)setDefaultTextProperties:(id)a0;
- (id)initWithDrawingState:(id)a0;
- (id)chartPart;
- (void)setChartPart:(id)a0;
- (id)currentChartType;
- (void)setCurrentChartType:(id)a0;
- (id)currentSeries;
- (void)setCurrentSeries:(id)a0;
- (void)setDefaultTextPropertiesHaveExplicitFontSize:(BOOL)a0;
- (void)pushTitleTextProperties:(BOOL)a0;
- (void)popTitleTextProperties;
- (void)pushDefaultTextProperties:(id)a0;
- (void)popDefaultTextProperties;
- (id)exState;

@end
