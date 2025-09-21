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
    char mDefaultTextPropertiesHaveExplicitFontSize;
    id<CHAutoStyling> mAutoStyling;
}

@property (nonatomic) char ignoreFormulas;

- (void).cxx_destruct;
- (id)resources;
- (id)drawingState;
- (void)setResources:(id)a0;
- (id)exState;
- (id)autoStyling;
- (id)chart;
- (id)chartPart;
- (id)currentChartType;
- (id)currentSeries;
- (id)defaultTextProperties;
- (id)initWithDrawingState:(id)a0;
- (void)popDefaultTextProperties;
- (void)popTitleTextProperties;
- (void)pushDefaultTextProperties:(id)a0;
- (void)pushTitleTextProperties:(char)a0;
- (void)setChart:(id)a0;
- (void)setChartPart:(id)a0;
- (void)setCurrentChartType:(id)a0;
- (void)setCurrentSeries:(id)a0;
- (void)setDefaultTextProperties:(id)a0;
- (void)setDefaultTextPropertiesHaveExplicitFontSize:(char)a0;

@end
