@class TSCHChartLayout, NSString, TSCHChartInfo, NSArray;

@interface TSCHChartNonRep : NSObject <TSCHSupportsRendering> {
    NSArray *_renderers;
}

@property (retain, nonatomic) TSCHChartInfo *chartInfo;
@property (retain, nonatomic) TSCHChartLayout *chartLayout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)drawInContext:(struct CGContext { } *)a0;
- (char)shadowsEnabled;
- (id)geometry;
- (id)renderers;
- (void)clearRenderers;
- (double)viewScale;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertUnscaledToBoundsRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupForDrawingInLayer:(id)a0 context:(struct CGContext { } *)a1;
- (id)commandController;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertNaturalRectToLayerRelative:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didDrawInLayer:(id)a0 context:(struct CGContext { } *)a1;
- (char)isDrawingIntoPDF;
- (id)initWithChartInfo:(id)a0;
- (char)renderTrendLinesForSeriesIndex:(unsigned long long)a0;
- (char)forceRenderBlankBackground;
- (char)is2DRepFor3DChartRep;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })outerShadowFrame;
- (char)renderElements;
- (char)renderElementsShadowOnly;
- (char)renderElementsWithoutShadows;
- (char)renderGrid;
- (id)renderGroupIndexSetForSeriesIndex:(unsigned long long)a0;
- (char)renderLabels;
- (char)renderReferenceLines;
- (id)renderSeriesIndexSet;
- (char)requireSeparateLabelLayer;
- (char)shouldShowLegendHighlight;

@end
